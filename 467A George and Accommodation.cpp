#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]-a[i]>1)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
