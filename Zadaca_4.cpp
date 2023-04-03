#include <iostream>
using namespace std;
int main()
{
    char c = ' ';
    stack <int> s;
    int res = 0;
    bool first = true;
    while(c!='=')
    {
        cin>>c;
        if(c=='=')
            break;
        if((int)c>=48) //c e broj
        {
            int n = (int)c-48;
            //cout<<"n="<<n<<endl;
            s.push(n);
            if(first)
            {
                res = n;
                first = false;
            }
        }
        else
        {
            switch(c)
            {
                case '*':
                {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    s.push(n1*n2);
                    break;
                }
                case '+':
                {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    s.push(n1+n2);
                    break;
                }
                case '-':
                {
                    int n1 = s.top();
                    s.pop();
                    int n2 = s.top();
                    s.pop();
                    s.push(n1-n2);
                    break;
                }
            }
        }
        //cout<<"res="<<s.top()<<endl;
    }
    cout<<s.top()<<endl;
    return 0;
}
