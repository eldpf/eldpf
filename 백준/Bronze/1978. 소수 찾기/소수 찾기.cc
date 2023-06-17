#include <iostream>
#include <cmath>
using namespace std;

int prime(int x)
{
    int q=sqrt(x)+1;
    for(int i=2;i<q;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    if(x==1)
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int r=0;r<n;r++)
    {
        int y;
        cin>>y;
        k=k+prime(y);
    }
    cout<<k;
}