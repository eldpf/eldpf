#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=s.length();
    int p=0;
    int pass=0;
    for(int i=0;i<k;i++)
    {
        if(pass>0)
        {
            pass--;
            continue;
        }
        if(!(s[i]=='c'||s[i]=='d'||s[i]=='l'||s[i]=='n'||s[i]=='s'||s[i]=='z'))
        {
            p++;
        }
        else
        {
            if(i==k-1)
            {
                p++;
            }
            else if(s[i]=='c'&&(s[i+1]=='='||s[i+1]=='-'))
            {
                pass=1;
                p++;
            }
            else if(s[i]=='d'&&s[i+1]=='z'&&s[i+2]=='=')
            {
                pass=2;
                p++;
            }
            else if(s[i]=='d'&&s[i+1]=='-')
            {
                pass=1;
                p++;
            }
            else if(s[i]=='l'&&s[i+1]=='j')
            {
                pass=1;
                p++;
            }
            else if(s[i]=='n'&&s[i+1]=='j')
            {
                pass=1;
                p++;
            }
            else if(s[i]=='s'&&s[i+1]=='=')
            {
                pass=1;
                p++;
            }
            else if(s[i]=='z'&&s[i+1]=='=')
            {
                pass=1;
                p++;
            }
            else
            {
                p++;
            }
        }
    }
    cout<<p;
}