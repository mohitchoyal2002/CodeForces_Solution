#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000],b[1000],x[1001];
    int n,temp;
    x[0]=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        x[i+1]=(x[i]-a[i+1])+b[i+1];
    }
    sort(x+1,x+n);
    
    cout<<x[n-1];
}
