#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=s.length();
    int q=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]-'A'<=2)
        {
            q=q+3;
        }
        else if(s[i]-'A'<=5)
        {
            q=q+4;
        }
        else if(s[i]-'A'<=8)
        {
            q=q+5;
        }
        else if(s[i]-'A'<=11)
        {
            q=q+6;
        }
        else if(s[i]-'A'<=14)
        {
            q=q+7;
        }
        else if(s[i]-'A'<=18)
        {
            q=q+8;
        }
        else if(s[i]-'A'<=21)
        {
            q=q+9;
        }
        else
        {
            q=q+10;
        }
    }
    cout<<q;
}