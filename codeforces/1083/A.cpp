#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1000000000000000
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }

const int maxn=300005;
int ans=0;

vector<pair<int,int > > g[maxn];
int w[maxn];
int dp[maxn];
int vis[maxn]={0};


void dfs(int v)
{
    vis[v]=1;
	for(auto it:g[v])
	{
		if(vis[it.first]==1)continue;
		dfs(it.first);
		int temp = dp[it.first]-it.second;
		ans = max(ans,temp+dp[v]);
		dp[v] = max(dp[v],temp+w[v]);
	}
	ans = max(ans,dp[v]);

}




int32_t main()
{
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */
memset(dp,0,sizeof dp);

int n;cin>>n;
for(int i=1;i<=n;i++)cin>>w[i];
F(i,n-1)
{
	int u,v,a;
	cin>>u>>v>>a;
   g[u].pb({v,a});
   g[v].pb({u,a});
}
for(int i=1;i<=n;i++){

	dp[i]=w[i];

}

dfs(1);
for(int i=1;i<=n;i++)vis[i]=0;
db(ans);



}
}