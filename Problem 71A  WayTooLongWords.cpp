#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	char a[6000];
	for(int i=0;i<=n;i++)
	{
		gets(a);
		int l=strlen(a);
		if(l>10)
		{
			cout<<a[0]<<l-2<<a[l-1]<<endl;
		}
		else
		{
			printf("%s\n",a);
		}
	}
}
