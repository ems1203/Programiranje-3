#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string izraz;
    cin>>izraz;
    stack <char> s;
    bool isp = true;
    for(int i=0;i<izraz.length();i++)
    {
        //cout<<izraz[i]<<endl;
        switch(izraz[i])
        {
            case '(': s.push(izraz[i]); break;
            case ')':
            {
                if(s.size()!=0)
                {
                    char mom = s.top();
                    s.pop();
                    if(mom!='(')
                    {
                        cout<<"Izrazot ne e ispraven."<<endl;
                        isp = false;
                        break;
                    }
                }
                else
                {
                    cout<<"Izrazot ne e ispraven."<<endl;
                    isp = false;
                    break;
                }
            } break;
            case '[': s.push(izraz[i]); break;
            case ']':
            {
                if(s.size()!=0)
                {
                    char mom = s.top();
                    s.pop();
                    if(mom!='[')
                    {
                        cout<<"Izrazot ne e ispraven."<<endl;
                        isp = false;
                        break;
                    }
                }
                else
                {
                    cout<<"Izrazot ne e ispraven."<<endl;
                    isp = false;
                    break;
                }
            } break;
            case '{': s.push(izraz[i]); break;
            case '}':
            {
                if(s.size()!=0)
                {
                    char mom = s.top();
                    s.pop();
                    if(mom!='{')
                    {
                        cout<<"Izrazot ne e ispraven."<<endl;
                        isp = false;
                        break;
                    }
                }
                else
                {
                    cout<<"Izrazot ne e ispraven."<<endl;
                    isp = false;
                    break;
                }
            } break;
            default: continue;
        }
    }
    if(s.size()!=0)
    {
        cout<<"Izrazot ne e ispraven."<<endl;
        isp = false;
    }
    if(isp)
    {
        cout<<"Izrazot e ispraven."<<endl;
    }
    return 0;
}

