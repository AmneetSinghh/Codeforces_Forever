// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 100000000
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
// directions

void Pencho()
{
int n,m;
cin>>n>>m;
int c[n+1];
set<int> G[100005];
F(i,n)cin>>c[i],G[c[i]].insert(c[i]);
F(i,m)
{
	int u,v;
	cin>>u>>v;
	G[c[u]].insert(c[v]);
    G[c[v]].insert(c[u]);
}
int mx=0;
int color=0;
F(i,n)
{
	int s=G[c[i]].size();
		if(G[c[i]].size()==mx  && color>c[i])color=c[i];

	if(G[c[i]].size()>mx)mx=G[c[i]].size(),color=c[i];
}
cout<<color;
tr;

}
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Pencho();
    return 0;
}