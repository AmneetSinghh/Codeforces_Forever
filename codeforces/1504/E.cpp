#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define pb push_back
#define iPair pair<int,int>
#define INF 10000000000009
using namespace std;
const int maxn=100005;

int32_t main() {
int n;cin>>n;
vector<pair<int,int>> vc;
vc.pb({0ll,0ll});
int sum=0;
int a[n+1],c[n+1];
for(int i=1;i<=n;i++)
{
	cin>>a[i]>>c[i];
	vc.pb({a[i],c[i]});
	sum+=c[i];
}
sort(vc.begin(),vc.end());

int till=0;
for(int i=1;i<=n-1;i++)
{
  till=max(till,vc[i].first+vc[i].second);
  if(till< vc[i+1].first)sum+=(vc[i+1].first-till);
}


cout<<sum;
tr;
}