#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h1,m1,h2,m2;
    int r1,r2;
    vector <pair <int,bool> > v;
    for(int i=0;i<n;i++)
    {
        cin>>h1>>m1>>h2>>m2;
        r1 = 60*h1+m1;
        r2 = 60*h2+m2;
        v.push_back(make_pair(r1,true)); //znaci deka e pocetok na interval
        v.push_back(make_pair(r1+r2,false)); //znaci deka e kraj na interval
    }
    sort(v.begin(),v.end());
    int lugje = 0;
    int maxlugje = 0;
    for(int i=0;i<2*n;i++)
    {
        if(v[i].second==true)
            lugje++;
        else
            lugje--;
        maxlugje = max(maxlugje,lugje);
    }
    cout<<maxlugje<<endl;
    return 0;
}
