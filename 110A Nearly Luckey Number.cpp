#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10000];
    int cnt=0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
   {
       if(a[i]=='4'|| a[i]=='7')
       {
           cnt++;
       }
   }
   if (cnt==4 || cnt==7)
   {
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }
}
