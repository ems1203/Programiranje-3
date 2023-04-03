//Reshenie so array

#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    int a[n1+n2];
    int j=0,k=0;
    for(int i=0;i<n1+n2;i++)
    {
        if(j<n1 && a1[j]<a2[k])
        {
            a[i]=a1[j];
            j++;
        }
        else
        {
            a[i]=a2[k];
            k++;
        }
    }
    for(int i=0;i<n1+n2;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//Reshenie so list

#include <iostream>
#include <list>
using namespace std;
void prt(list <int> l, int n)
{
    for(int i=0;i<n;i++)
    {
        int p = l.front();
        l.pop_front();
        cout<<p<<" ";
    }
    cout<<endl;
}
int main()
{
    int n1,n2;
    cin>>n1;
    list <int> a1;
    int p;
    for(int i=0;i<n1;i++)
    {
        cin>>p;
        a1.push_back(p);
    }
    cin>>n2;
    list <int> a2;
    for(int i=0;i<n2;i++)
    {
        cin>>p;
        a2.push_back(p);
    }
    list <int> a;
    for(int i=0;i<n1+n2;i++)
    {
        if(a1.size()!=0 && a2.size()!=0 && a1.front()<a2.front())
        {
            a.push_back(a1.front());
            a1.pop_front();
        }
        else if(a1.size()!=0 && a2.size()!=0 && a1.front()>a2.front())
        {
            a.push_back(a2.front());
            a2.pop_front();
        }
        else if(a1.size()==0)
        {
            a.push_back(a2.front());
            a2.pop_front();
        }
        else
        {
            a.push_back(a1.front());
            a1.pop_front();
        }
    }
    prt(a,n1+n2);
    cout<<endl;
    return 0;
}
