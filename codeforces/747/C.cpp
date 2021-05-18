// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   1010


int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){

int n,q;cin>>n>>q;
int t[q+1],k[q+1],d[q+1];
for(int i=1;i<=q;i++)

{
	cin>>t[i]>>k[i]>>d[i];
}
int dp[n+1]={0};
int pre=0;
for(int i=1;i<=q;i++)
{
 int time=t[i];
 int server=k[i];
 int have=d[i];
 int c=0;
 int ans=0;
 vector<int> vc;


if(i>1){
	for(int j=1;j<=n;j++){
	int diff=time-pre;
	dp[j]=max(0ll,dp[j]-diff);
	}
}


 for(int j=1;j<=n;j++){
   if(dp[j]==0 and c<server){vc.pb(j);++c;}
 }
if(c==server)
{
	for(auto sd:vc)dp[sd]=have,ans+=sd;
	cout<<ans;
}
else cout<<"-1";


pre=time;
tr;

}







}
}