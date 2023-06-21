#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q=0;
    for(int i=0;i<n;i++)
    {
        q=q+arr[i]*(n-i);
    }
    cout<<q;
}