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



int vis[500001];
set<int> vs;

vector<int> G[500001];
void dfs(int u)
{
vs.insert(u);
vis[u]=1;
for(auto sd:G[u]){
	if(!vis[sd])dfs(sd);
}
}
int32_t main()
{
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */
	memset(vis,0,sizeof vis);
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++){
	int k;
	cin>>k;
	vector<int> vc;
	int mi=INT_MAX;
	for(int j=1;j<=k;j++){
		 int val;cin>>val;vc.pb(val);
		 mi=min(val,mi);
	}
	if(vc.size()<=1)continue;
	sort(vc.begin(),vc.end());
	for(auto sd:vc){
		if(sd!=mi)G[mi].push_back(sd),G[sd].push_back(mi);
	}
}

int dp[n+1]={0};

for(int i=1;i<=n;i++)
{
   if(!vis[i])
   {
   	dfs(i);
   	dp[i]=vs.size();
   	for(auto sd:vs){
     dp[sd]=vs.size();
   	}
   	vs.clear();

   }
}

F(i,n)cout<<dp[i]<<" ";
tr;

}
}