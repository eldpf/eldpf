#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    cin>>c;
    int h,m;
    h=c/60;
    m=c%60;
    int d,e;
    if(b+m>=60)
    {
        e=b+m-60;
        h++;
    }
    else
    {
        e=b+m;
    }
    if(a+h>=24)
    {
        d=a+h-24;
    }
    else
    {
        d=a+h;
    }
    cout<<d<<" "<<e;
    return 0;
}