#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,a,b;cin>>n>>a>>b;
		int j=49;
		string res="";
		for(int i=1;i<=a;i++)
		{
			char c = j+'0';
			if(i<b)
			++j;
			res+=c;
		}
		int i=0;
		while(res.length()!=n)
		{
			res=res+res[i];
			++i;
		}
		cout<<res<<endl;
		
	}
	
}
