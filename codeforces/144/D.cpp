#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,pair<int,int> >
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;
map<pair<int,int>,int> store;

void check(int u,int v,int add){
  if(!store[{u,v}])store[{u,v}]+=add;
}

vector<pair<int,int>> G[maxn];
vector<iPair> vc;
int parent[maxn];
int n,m,s,d;
void dfs()
{
    priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;
    vector<int> dist(n+1, INF);
    pq.push(make_pair(0, s));
    dist[s] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto c:G[u])
        {
            int v=c.first;
            int weight=c.second;
             if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                parent[v]=u;
                pq.push(make_pair(dist[v], v));
            }
        }
    }


    // Shortest Path is complete now find hte other logic!
    int ans=0;
    for(int i=1;i<=n;i++)if(dist[i]==d)++ans;

    for(auto sd:vc){
      int u=sd.first;
      int v=sd.second.first;
      int w=sd.second.second;
      int first=d-dist[u],second=d-dist[v];
      if(first>=w || second>=w)continue;
      if(first>0 && min(dist[u]+first,dist[v]+w-first)==d)++ans;
      if(second>0  && first!=w-second && min(dist[v]+second,dist[u]+w-second)==d)++ans;

  
      }
cout<<ans;
tr;


}

int32_t main() {
    int tt=1;
    // cin>>tt;
    while(tt--){

cin>>n>>m>>s;
for(int i=1;i<=m;i++)
{
  int u,v,w;
  cin>>u>>v>>w;
  vc.pb({u,{v,w}});
  G[u].pb({v,w});
  G[v].pb({u,w});
}
cin>>d;
for(int i=1;i<=n;i++)parent[i]=i;
dfs();















}}
