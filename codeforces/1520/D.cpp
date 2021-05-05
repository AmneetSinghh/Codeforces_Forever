// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005


int32_t main() 
{
int t=1;
cin>>t;
while(t--){

int n;
cin>>n;
int a[n+1];
map<int,int> h;
int ans=0;
for(int i=1;i<=n;i++)cin>>a[i],h[a[i]-i]++;
for(auto sd:h){
  ans+=(sd.second*(sd.second-1))/2;
}
cout<<ans;
tr;
}

}