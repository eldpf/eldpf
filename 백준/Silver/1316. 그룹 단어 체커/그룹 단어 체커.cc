#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        int q=a.length();
        int arr[26]={};
        for(int l=0;l<q;l++)
        {
            if(l==0)
            {
                arr[a[l]-'a']=1;
            }
            else if(a[l-1]!=a[l])
            {
                if(arr[a[l]-'a']==1)
                {
                    break;
                }
                else
                {
                    arr[a[l]-'a']=1;
                }
            }
            else if(a[l-1]==a[l] && l!=q-1)
            {
                continue;
            }
            if(l==q-1)
                p++;
        }
    }
    cout<<p;
}