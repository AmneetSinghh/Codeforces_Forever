/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 1e18
using namespace std; 
const int maxn=100005;
//implemetn kruskals;

int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
vector<pair<int,ipair> >  edges;
// To represent Disjoint Sets
struct DisjointSets
{
    int *parent, *rnk;
    int n;
  
    // Constructor.
    DisjointSets(int n)
    {
        // Allocate memory
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];
  
        // Initially, all vertices are in
        // different sets and have rank 0.
        for (int i = 0; i <= n; i++)
        {
            rnk[i] = 0;
  
            //every element is parent of itself
            parent[i] = i;
        }
    }
  
    // Find the parent of a node 'u'
    // Path Compression
    int find(int u)
    {
        /* Make the parent of the nodes in the path
           from u--> parent[u] point to parent[u] */
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }
  
    // Union by rank
    void merge(int x, int y)
    {
        x = find(x), y = find(y);
  
        /* Make tree with smaller height
           a subtree of the other tree  */
        if (rnk[x] > rnk[y])
            parent[y] = x;
        else // If rnk[x] <= rnk[y]
            parent[x] = y;
  
        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};

void Not_Stable()
{

int n,p;cin>>n>>p;
int a[n+1];
vector<ipair> vc;
F(i,n)cin>>a[i],vc.pb({a[i],i});
for(int i=1;i<=n-1;i++)edges.pb({p,{i,i+1}});
sort(all(vc));
int present[n+1]={0};
for(auto sd:vc){
  if(sd.first>=p)break;
  int l=sd.second;
  int r=sd.second;
  // till the left;
  while(present[l]==0 && l-1>=1 && gcd(a[l-1],sd.first)==sd.first)--l,edges.pb({sd.first,{sd.second,l}});
  while(present[r]==0 && r+1<=n && gcd(a[r+1],sd.first)==sd.first)++r,edges.pb({sd.first,{sd.second,r}});
  for(int i=l;i<=r;i++)present[i]=1;
}



// for(auto sd:edges)cout<<sd.first<<" * "<<sd.second.first<<" "<<sd.second.second<<"\n";
sort(all(edges));
int ans=0;
DisjointSets ds(n+12);
for (auto it:edges)
    {
        int u = it.second.first;
        int v = it.second.second;
  
        int set_u = ds.find(u);
        int set_v = ds.find(v);
        if (set_u != set_v)
        {
              ans += it.first;
              ds.merge(set_u, set_v);
        }
    }
  
cout<<ans<<"\n";
edges.clear();
}
 
 
 
 
int32_t main() {
    io;
   int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}