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
#define MAXN   200005
 
int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n,k;
cin>>n>>k;
int a[n+1];
int vc[MAXN]={0};
for(int i=1;i<=n;i++)cin>>a[i],vc[a[i]]++;
vector<ipair> val;
for(int i=1;i<=MAXN-5;i++){
 val.pb({vc[i],i});
}

sort(val.begin(),val.end());
reverse(val.begin(),val.end());

vector<int> ans;
int l=1,r=n;

while(l<=r){
	int mid=(l+r)/2;
	// can we make 5 number of copies of each; check it;
	int c=0;
	vector<int> again;
	int j=0;
	for(int i=0;i<k and again.size()<k;i++){
      int rem=(val[i].first/mid);
      if(rem>=1)
      {
        while(j<k && rem>=1){  --rem,again.pb(val[i].second), ++j;}
      }
      else break;
	}

	if(again.size()>=k)
	{
         ans=again;
         l=mid+1;
	}
	else r=mid-1;// take less coppies;

}


for(auto sd:ans)cout<<sd<<" ";
tr;

}}
 