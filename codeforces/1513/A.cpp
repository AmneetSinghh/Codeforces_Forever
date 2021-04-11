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
#define mod 998244353
#define inf 1e18
using namespace std; 
const int maxn=100005;


void Not_Stable()
{


int n;
cin>>n;
int k;
cin>>k;
int m=k;
int a[n+1];
F(i,n)a[i]=i;
int i=3;
while(i<=n){
  if(k){
    swap(a[i],a[i-1]);
    i+=2;
    --k;
  }
  else break;
}
for(int i=2;i<=n-1;i++){
  if(a[i]>a[i-1] && a[i]>a[i+1])--m;
}

if(m==0){
  F(i,n)cout<<a[i]<<" ";
  tr;
}
else cout<<"-1\n";


}
 
 
 
 
int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}