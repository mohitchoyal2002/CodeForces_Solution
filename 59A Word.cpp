#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int l=0,u=0;
    for(int i=0;a[i]!='\0';i++) 
    {
        if(a[i]>=65 && a[i]<=90)
        {
            u++;
        }
        else{
            l++;
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(l>=u)
        {
            if(a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;
            }
        }
        else
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
            }
        }
        cout<<a[i];
    }
}
