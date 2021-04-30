#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    std::string a;
    std:: string b;
    getline(cin,a);
    getline(cin,b);
    reverse(a.begin(),a.end());
    if(a.compare(b)==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
