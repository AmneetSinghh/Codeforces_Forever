#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  // Function to check if x is power of 2

int32_t main() 
{
int t=1;
cin>>t;



while(t--)
{
/* Practice never ends */

int n,m,x;
cin>>n>>m>>x;
int a[n+1];
vector<pair<int,int>> vc;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
    vc.pb({a[i],i});
}
sort(vc.begin(),vc.end());
reverse(vc.begin(),vc.end());
int vis[n+1]={0};
multiset<pair<int,int>> store;
for(int i=0;i<m;i++)
{
    vis[vc[i].second]=i+1;
    store.insert({vc[i].first,i+1});
}
for(int i=m;i<vc.size();i++)
{
    int id=vc[i].second;
    int val=vc[i].first;
    auto one=(*store.begin()).first;
    auto color=(*store.begin()).second;

multiset<pair<int,int>>::iterator it, it1;
it = store.find(make_pair(one,color));
it1 = it;
it1++;
store.erase (it, it1);
vis[id]=color;
store.insert({one+val,color});
}

int mi=INF;
int mx=0;
for(auto sd:store){
mi=min(sd.first,mi);
mx=max(sd.first,mx);
}

if(mx-mi>x)cout<<"NO";
else{
    cout<<"YES";
    tr;
    for(int i=1;i<=n;i++)cout<<vis[i]<<" ";

}
tr;

}
}