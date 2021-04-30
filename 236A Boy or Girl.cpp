#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::string a;
    getline(cin,a);
    std::sort(a.begin(), a.end());
    int l=a.size();
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }
    int c=l-count;
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
