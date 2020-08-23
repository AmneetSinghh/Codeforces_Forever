// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100005
// directions
vector<int> G[N];
int parent[2001]={0};
int w[2001]={0};
int sz[2001]={0};
vector<int> dp;
void dfs(int s,int p)
{
	sz[s]=1;
	for(int c:G[s])
		if(c!=p)
			dfs(c,s),sz[s]+=sz[c];	
}


void dfs1(int s)
{
	for(int c:G[s])
	if(c!=parent[s])
	dfs1(c);
	
	if(s==0)return;
	dp.insert(dp.begin()+w[s],s);
}

void we_have_choices()
{
int n,u,flag=0,fal=0;cin>> n;
F(i,n)
{
	cin>>u>>w[i];
	parent[i]=u;
	G[i].pb(u),G[u].pb(i);
	if(parent[i]==0)flag=i;
}
// check -1 or not
dfs(flag,0);
F(i,n)if(w[i]>=sz[i])fal=1;
if(fal)cout<<"NO\n";
else
{
	cout<<"YES";tr;
	dfs1(flag);
	int c=0;
	int a[2001]={0};
	for(auto i:dp)a[i]=++c;
	F(i,n)cout<<a[i]<<" ";
	tr;
}
}
 
 
int32_t main()
{
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}