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

const int maxn=200010;
int a[maxn];
int n;
vector<int> g[maxn];
int vis[maxn]={0};
set<int> vc[maxn];
int dp[maxn]={0};
int ans=0;
map<int,int> storage[maxn];
void dfs(int u)
{
vis[u]=1;
// cout<<u<<"new -> \n";
vector<int> child;
for(auto sd:vc[a[u]])storage[u][sd]=1,ans=max(ans,1ll);
for(auto v:g[u])
{
	if(vis[v]==1)continue;
	dfs(v);
	for(auto sd:vc[a[u]])
	{
		ans=max(ans,storage[u][sd]+storage[v][sd]);
		storage[u][sd]=max(storage[u][sd],storage[v][sd]+1);
	}
	
}


}

bool prime[maxn+5];
void sieve()
{

    memset(prime, true, sizeof(prime));
    for (int p=2; p<=200000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p; i<=200000; i += p)
                prime[i] = false,vc[i].insert(p);
        }
    }
}

int32_t main()
{
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Stops */
sieve();
cin>>n;
F(i,n)cin>>a[i];
F(i,n-1)
{
	int u,v;
	cin>>u>>v;
	g[u].pb(v);
	g[v].pb(u);
}
for(int i=1;i<=n;i++)
{
	if(a[i]==1)dp[i]=0;
	else dp[i]=1;
}
dfs(1);


db(ans);




}
}