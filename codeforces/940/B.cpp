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
#define inf 7e18
using namespace std; 

void Not_Stable()
{   

int n,k,a,b;
cin>>n>>k>>a>>b;
int cost=0;
if(k==1){cout<<(n-1)*a;return;}
if(n<k){cout<<(n-1)*a;return;}
while(n>1){

  if(n<k){cost+=((n-1)*a);break;}
  int val=n/k;
  int rem=n%k;
  n-=rem;
  cost+=(rem*a);
  cost+=min(b,(n-val)*a);
n/=k;

}


cout<<cost;
tr;

}




 
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}