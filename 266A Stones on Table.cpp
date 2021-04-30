#include<iostream>
using namespace std;
int main()
{
    char a[51];
    int  n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
}
