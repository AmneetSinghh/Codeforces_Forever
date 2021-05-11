// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005
 
int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */
int n,m;
cin>>n>>m;
int s[n+1],t[n+1];
unordered_map<int,multiset<int,greater<int>> > store;
unordered_map<int,vector<int>> dp;
 
for(int i=1;i<=n;i++)
{
	cin>>s[i]>>t[i];
	store[s[i]].insert(t[i]);
}
 
for(auto c:store){
	int pre=0;
	for(auto sd:c.second){
		pre+=sd;
		dp[c.first].pb(pre);
	}
}
 
 
 
set<int> have;
for(auto sd:store)have.insert(sd.first);
int mx=0;
 
for(int i=1;i<=n;i++)// one person has how many subjects;
{
	int sum=0;
	multiset<int,greater<int>> tt;
	vector<int> er;
	for(auto c:have)// values;
	{
		tt.insert(dp[c][i-1]);
		if(dp[c].size()==i)er.pb(c);
	}
	for(auto sd:er)have.erase(have.find(sd));
	for(auto sd:tt){
		sum+=sd;
		mx=max(sum,mx);
	}


	if(have.size()==0)break;
}
 
 
 
 
 
 
 
 
cout<<mx;tr;
 
 
 
 
}}
 