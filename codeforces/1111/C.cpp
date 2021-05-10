// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005

int A[MAXN];
vector<int> vc;
int dp[MAXN];
int n,k,a,b;
int ans=INF;
int po;
int calc(int l,int r)
{
 if(l<0 || r>po || l>r)return 0;
 int ans=INF;
 // cout<<l<<" "<<r;
 // tr;
 int L=lower_bound(vc.begin(),vc.end(),l)-vc.begin();
 int R=upper_bound(vc.begin(),vc.end(),r)-vc.begin();
 if(R-L>=1)// empty;
 {
 	int mid=(r+l)/2;
 	ans=min(ans,b*(r-l+1)*(R-L));
 	// cout<<l<<" "<<r<<" "<<ans;tr;
 	if(r-l>=1)    ans=min(ans,calc(l,mid)+calc(mid+1,r));
 }
 else ans=a;


// cout<<ans<<" "<<l<<" "<<r<<"-> after\n";

return ans;

}
int32_t main() 
{
int t=1;
while(t--){
	int val;
/* After making logic think for best and easy way of implementation, don't be rush  */
cin>>n>>k>>a>>b;
po=pow(2,n);
vc.pb(0);
vc.pb(pow(2,31));
for(int i=1;i<=k;i++)cin>>val,vc.pb(val);
sort(vc.begin(),vc.end());
cout<<calc(1,po);





}}




