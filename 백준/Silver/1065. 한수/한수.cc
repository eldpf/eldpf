#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000]={};
    for(int i=1;i<=1000;i++)
    {
        if(i<100)
        {
            arr[i]=1;
        }
        else
        {
            int j,k,l;
            j=i/100;
            k=(i/10)%10;
            l=i%10;
            if(j+l==2*k)
            {
                arr[i]=1;
            }
        }
        
    }
    if(n<100)
    {
        cout<<n;
    }
    else
    {
        int q=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
            {
                q++;
            }
        }
        cout<<q;
    }
}