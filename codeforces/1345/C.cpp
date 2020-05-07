#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define io  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define dl long double
int main()
{
io;int t;cin>>t;while(t--){
	
	ll n;cin>>n;
	ll a[n*3+1];
	map<ll,ll> mp;
	for(ll i=1;i<=n;i++)
	cin>>a[i];
	int flag=0;
	for(ll i=1;i<=n;i++)
	{
		if(!mp[(((a[i]+i)%n+n)%n)])
		mp[(((a[i]+i)%n+n)%n)]++
		;else {flag=1;break;}

	}
	if(flag==1)cout<<"NO\n";else cout<<"YES\n";
	
	
}}


