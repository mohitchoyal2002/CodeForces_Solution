#include<iostream>
using namespace std;
int main()
{
    int n,k,w;
    cin>>k>>n>>w;
    int c=k*w*(w+1)/2;
    int ans=c-n;
    if(c<n)
    {
        cout<<"0";
    }
    else{
        cout<<ans;
    }
    
}
