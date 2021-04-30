#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,t,cnt=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            cnt++;
        }
    }
    int x=n+cnt;
    cout<<x;
}
