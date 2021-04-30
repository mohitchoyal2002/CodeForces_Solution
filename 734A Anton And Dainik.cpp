#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100000];
    int n,d=0,e=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='D')
        {
            d++;
        }
        else if(a[i]=='A')
        {
            e++;
        }
    }
    if(d<e)
    {
        cout<<"Anton";
    }
    else if(e<d)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
