/* not_stable but Believer */
#include<bits/stdc++.h>
#define int int
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
using namespace std;
const int maxn=100005;
void Not_Stable(){
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ******************************************

 int n,k;
 cin>>n>>k;
 if(n%2==1)
 {
  cout<<1<<" "<<n/2<<" "<<n/2;
 }
 else
 {
   int first=(n/2);
   if(first%2==0)cout<<first<<" "<<first/2<<" "<<first/2;
   else
   {
    // odd man;
    cout<<(n-2)/2<<" "<<(n-2)/2<<" "<<2;



   // if(ss==0)cout<<f<<" "<<f<<" "<<f;
   // else if(ss==1)cout<<n/2<<" "<<" "<<n/2<<" "<<1;
   // else 
   // {
   //  int pre=n-1;
   //  if(pre%2==0)cout<<pre/2<<" "<<pre/2<<" "<<1;
   //  else cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2;
   // }
 
   }
   
 }
 tr;

}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}