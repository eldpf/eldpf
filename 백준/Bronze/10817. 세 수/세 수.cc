#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int q=max(a,b);
    int r=max(a,c);
    int s=max(b,c);
    if(q==r)
    {
        cout<<s;
    }
    else
    {
        cout<<min(q,r);
    }
}