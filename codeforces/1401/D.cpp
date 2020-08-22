
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
int sz[N],p[N];
void dfs(int s,int p)
{
sz[s]=1;
for(int c:G[s]){
	if(p!=c){
	dfs(c,s);
    sz[s]+=sz[c];}
}
}

void we_have_choices()
{
int n,u,v,m;cin>>n;
for(int i=1; i<=n ;i++) G[i].clear();
F(i,n-1){cin>>u>>v;G[u].pb(v);G[v].pb(u);}

F(i,100000)sz[i]=0,p[i]=0;
dfs(1,0);
F(i,n)sz[i]=sz[i]*(n-sz[i]);


sort(sz+1,sz+1+n);// from very less used to very more used edges baby
cin>>m;F(i,m)cin>>p[i];
p[++m]=1;
while(m<n){p[++m]=1;}
sort(p+1,p+1+m);
while(m>n){p[m-1]=p[m-1]*p[m]%mod;--m;}

int res=0;
for(int i=1;i<=n;i++){
	res+=sz[i]%mod*p[i];
	res%=mod;
}
cout<<res%mod;
tr;

}


int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)we_have_choices();
    return 0;
}