#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
const int maxn=200005;

int vis[maxn]={0},used[maxn]={0};
vector<int> G[maxn];
vector<iPair> edges;
int flag=0;

void dfs(int s,int take)
{
vis[s]=1;
used[s]=take;
for(auto sd:G[s])
{
    if(!vis[sd])
        {
            dfs(sd,take^1);
        }
    else{
        if(used[sd]!=take^1){
            flag=1;
        }
    }
}
}



int32_t main() {
    int t=1;
    // cin>>t;
while(t--){
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    edges.pb({u,v});
    G[u].pb(v);
    G[v].pb(u);
}

dfs(1,0);
if(flag)cout<<"NO\n";
else{
    cout<<"YES";
tr;
for(auto sd:edges){
    if(used[sd.first])cout<<"1";
    else cout<<"0";

}

tr;
}



    }
     
}