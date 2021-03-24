/* Harry Singh :) not_stable */
// Practice Never ends;
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
using namespace std;
const int maxn=300005;
int n,k;
int a[maxn];
int b[maxn+1];
int maxsum[maxn];

int check()
{
maxsum[1]=a[1];
int cm=a[1];
for(int i=2;i<=n;i++)
{
   cm=max(a[i],cm+a[i]);
   maxsum[i]=cm;
}
int sum=0;
for(int i=1;i<=k;i++)sum+=a[i];
int result=sum;
for(int i=k+1;i<=n;i++)
{
   sum=sum+a[i]-a[i-k];// cut the previous;
   result=max(sum,result);// exactly k
   result=max(result,sum+maxsum[i-k]);// now we cn make greater than k by findding some maxsum in iut
}
return result;

}
void Not_Stable(){
/* Either Up or Down Practice Never Ends */
cin>>n>>k;
F(i,n)cin>>b[i];
int l=1,r=n;
int ans=0;
while(l<=r){
   int mid=(l+r)/2;
   F(i,n){
      if(b[i]<mid)a[i]=-1;
      else a[i]=1;
   }
   if(check()>0)ans=mid,l=mid+1;
   else r=mid-1;
}
cout<<ans;
tr;


}

 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}