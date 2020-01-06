#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
{
	int n;string s;
	cin>>n;
	cin>>s;
	int count=0;
	int mx=0;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
		flag=1;
				mx=max(count,mx);
		count=0;
		}
		else if(s[i]=='P' && flag==1)
		count++;
		else if(flag==0 && s[i]=='P')
		count=0;
		
	}
		mx=max(count,mx);
	cout<<mx<<endl;
	
}
	return 0;
}
