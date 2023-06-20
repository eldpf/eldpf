#include <iostream>
using namespace std;

int main()
{
    int arr[11000]={};
    for(int i=1;i<10000;i++)
    {
        int q=0;
        if( i<100)
        {
            q=i+i%10+i/10;
        }
        else if( i<1000)
        {
            q=i+i/100+(i/10)%10+i%10;
        }
        else
        {
            q=i+i/1000+(i/100)%10+(i/10)%10+i%10;
        }
        arr[q]=1;
    }
    for(int i=1;i<10000;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<"\n";
        }
    }
}