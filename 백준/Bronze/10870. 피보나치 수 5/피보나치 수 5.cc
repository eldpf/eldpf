#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[21]={};
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=20;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n];
}