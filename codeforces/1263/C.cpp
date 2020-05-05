#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll t;cin>>t;while(t--){
	ll n;cin>>n;
	ll sq=sqrt(n);
	
set<ll> s;
s.insert(0);
for(ll i=1;i<=sq;i++)
{s.insert(i);s.insert(n/i);}


cout<<s.size()<<endl;
for(auto sd:s)
cout<<sd<<" ";
cout<<endl;
}
}
