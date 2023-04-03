#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <string,tuple<int,int,int>> m;
    tuple <int,int,int> t;
    string ime,prezime;
    int l,p,v;
    queue <string> licna,pasos,vozacka;
    for(int i=0;i<n;i++)
    {
        cin>>ime>>prezime;
        ime = ime + " " + prezime;
        cin>>l>>p>>v;
        t=make_tuple(l,p,v);
        m.insert(make_pair(ime,t));
        if(l==1)
        {
            licna.push(ime);
        }
        else if(p==1)
        {
            pasos.push(ime);
        }
        else if(v==1)
        {
            vozacka.push(ime);
        }
    }
    while(!licna.empty())
    {
        string mom = licna.front();
        licna.pop();
        t = m[mom];
        if(get<1>(t)==1)
        {
            pasos.push(mom);
        }
        else if(get<2>(t)==1)
        {
            vozacka.push(mom);
        }
        else
        {
            cout<<mom<<endl;
        }
    }
    while(!pasos.empty())
    {
        string mom = pasos.front();
        pasos.pop();
        t = m[mom];
        if(get<2>(t)==1)
        {
            vozacka.push(mom);
        }
        else
        {
            cout<<mom<<endl;
        }
    }
    while(!vozacka.empty())
    {
        string mom = vozacka.front();
        vozacka.pop();
        cout<<mom<<endl;
    }
    return 0;
}
