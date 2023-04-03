#include <iostream>
#include <list>

using namespace std;

void prt(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(list <int> l, int n)
{
    for(int i=0;i<n;i++)
    {
        int pom = l.front();
        cout<<pom<<" ";
        l.pop_front();
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    /*
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    //so dodavanje na poslednite 5 na pocetok

    prt(arr,n);
    int pom[d];
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        if(i<n-d)
        {
            arr[i+d]=arr[i];
        }
        else
        {
            pom[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<d;i++)
    {
        arr[i]=pom[i];
    }
    prt(arr,n);
    */

    int p;
    list <int> l;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        l.push_back(p);
    }
    int d;
    cin>>d;
    while(d!=0)
    {
        p=l.front();
        l.push_back(p);
        l.pop_front();
        d--;
    }
    print(l,n);

    return 0;
}
