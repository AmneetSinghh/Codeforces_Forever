#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
    int flag=0;
	int mx=0;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		++count;
		else
		{
			mx=max(mx,count);
			count=0;
		}
		// cout<<mx<<"  "<<count<<endl;

	}
	mx=max(mx,count);
	cout<<mx+1<<endl;
	
	
	}
}
