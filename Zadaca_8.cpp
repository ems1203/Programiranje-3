#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <string,int> m;
    string s;
    cin>>s;
    int n = s.size();
    string naj = "";
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        string mom = "";
        for(int j=i;j<n;j++)
        {
            mom += s[j];
            m[mom]++;
            if(m[mom] == maxx && mom.size()>naj.size())
            {
                naj = max(mom,naj);
            }
            else if(m[mom] > maxx)
            {
                naj = mom;
                maxx = m[mom];
            }
        }
    }
    cout<<naj<<endl;
    return 0;
}
