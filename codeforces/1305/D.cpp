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
#define N 10001
// directions
vector<int> G[N];
int query(int u, int v) {
	cout << "? " << u << ' ' << v << endl;
	int l; 
	cin >> l;
	return l;
}
void we_have_choices()
{
int n,w;
cin>>n;
vector<int> deg(n+1,0);
F(i,n-1)
{
	int u,v;
	cin>>u>>v;
	G[u].pb(v);
	G[v].pb(u);
	deg[u]++,deg[v]++;
}
queue<int> q;
for (int i = 1; i <= n; ++i) if (deg[i] == 1) q.push(i);
while(q.size()>=2)
{
	int u=q.front();q.pop();
	int v=q.front();q.pop();
	w=query(u,v);
	if(w==u || w==v){cout<<"! "<<w;tr;return;}

// just the degrees that is equal to one, that we have to find so this is very useful
	for (auto& x : G[u]) {
			--deg[x];
			if (deg[x] == 1) {
				q.push(x);
			}
		}
		for (auto& x : G[v]) {
			--deg[x];
			if (deg[x] == 1) {
				q.push(x);
			}
		}
}

	cout<<"! "<<q.front();
	tr;



}


 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}