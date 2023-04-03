#include <iostream>
#include <map>
#include <string.h>
using namespace std;
bool sporedi(string str)
{
    if(str.size()==4 && str[0]=='K' && str[1]=='R' && str[2]=='A' && str[3]=='J')
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    string ime, lozinka;
    map <string,string> m;
    for(int i=0;i<n;i++)
    {
        cin>>ime>>lozinka;
        m.insert(make_pair(ime,lozinka));
    }
    string s = "",proba;
    while(true)
    {
        cin>>s;
        if(sporedi(s))
            break;
        cin>>proba;
        if(m[s]==proba)
        {
            cout<<"Najaven"<<endl;
            break;
        }
        else
        {
            cout<<"Nenajaven"<<endl;
        }
    }
    return 0;
}
