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

 // so you made a logic for the n=3, now make it increse;
 if(k==n){
  F(i,n)cout<<"1 ";
  tr;
  return;
 }
 else if(k+1==n){
  F(i,k-1)cout<<"1 ";
  cout<<"2 ";
  tr;
    return;

 }
 else if(k+2==n){
  F(i,k-2)cout<<"1 ";
  cout<<2<<" "<<2;
  tr;
    return;

 } else{
   k-=3;
   F(i,k)cout<<"1 ";// n=10    k-9 odne, k=8 done,   k=7;
   n-=k;// done;

 }




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
    cout<<(n-2)/2<<" "<<(n-2)/2<<" "<<2;
 
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