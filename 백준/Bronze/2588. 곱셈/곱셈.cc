#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int f,s,t;
    f=m%10;
    m=m/10;
    s=m%10;
    m=m/10;
    t=m%10;
    cout<<n*f<<"\n"<<n*s<<"\n"<<n*t<<"\n"<<n*f+n*s*10+n*t*100;
}