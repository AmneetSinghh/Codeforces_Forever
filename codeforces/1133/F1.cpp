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

const int maxn=200005;

vector<pair<int,int>> ans;

set<int> g;
int vis[maxn]={0};
vector<int> vc[maxn];


void dfs(int s)
{
vis[s]=1;
for(auto sd:vc[s])
{
	if(!vis[sd])
	{
       if(g.find(sd)==g.end())// nahi labya;
       {
       	ans.pb({s,sd});
       	g.insert(sd);
       	dfs(sd);

       }
	}
}
}



int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */


int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++)
{
	int u,v;
	cin>>u>>v;
	vc[u].pb(v);
	vc[v].pb(u);
}
int mx=0,ind=-1;



for(int i=1;i<=n;i++){
	if(vc[i].size()>mx)mx=vc[i].size(),ind=i;
}


int vis[n+1]={0};
vis[ind]=1;
g.insert(ind);
for(auto sd:vc[ind])
{
	ans.pb({ind,sd});
	g.insert(sd);

}


for(auto sd:g)
{
  if(!vis[sd])
  {
  	dfs(sd);
  }
}

for(auto sd:ans)cout<<sd.first<<" "<<sd.second<<"\n";

} 
}
 
 
 