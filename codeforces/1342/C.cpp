#include <bits/stdc++.h>
#define int long long
#define iris 1000000007
using namespace std;
 
int sana(int n,int a,int b)
{
	int c,res;
	c=a/__gcd(a,b)*b;
	res=(n/c)*b;// 20 hogay bro add also the 10 more for the bro speicall bro
	res+=min(n%c+1,b);

	return n+1-res;
}
 
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,q,l,r;
		cin>>a>>b>>q;
		if(a>b)
		{
			swap(a,b);
		}
		while(q--)
		{
			cin>>l>>r;
			cout<<sana(r,a,b)-sana(l-1,a,b)<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}
