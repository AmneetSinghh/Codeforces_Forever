/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int unsigned long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb insert
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 7e18
using namespace std; 

const int N=100001;




int hash1[N+1]={0};
int vis[N+1]={0};
int a[N+1];
set<int> vc[N+1];
void Not_Stable(){
int n,k;
cin>>n>>k;

F(i,k){
  cin>>a[i];
  hash1[a[i]]++;
}


for(int i=k;i>=1;i--){
  int val=a[i];
    vc[val].pb(val);
    if(hash1[val-1]>0 && val-1>=1)vc[val].pb(val-1);
    if(hash1[val+1]>0 && val+1<=n)vc[val].pb(val+1);
    hash1[val]--;
}

int ans=(n-1)*3+1;
for(int i=1;i<=n;i++){
ans-=(vc[i].size());

}
cout<<ans;
tr;
}
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;

    while (g--)Not_Stable();
    return 0;
}