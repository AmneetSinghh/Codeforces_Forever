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
 
int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n;cin>>n;
 string s;cin>>s;
 int pre[n+1]={0},nex[n+1]={0};
 int c=0;
 int flag=0;
 for(int i=0;i<n;i++){
 	if(s[i]=='G')++c;
 	else{
 		pre[i]=c;
 		c=0;
 		flag=1;
 	}
 }

 c=0;
  for(int i=n-1;i>=0;i--){
 	if(s[i]=='G')++c;
 	else{
 		nex[i]=c;
 		c=0;
 	}
 }
 int first=-1;
 int last=-1;
 for(int i=0;i<n;i++){
 	if(s[i]=='G'){first=i;break;}
 }
 for(int i=n-1;i>=0;i--){
 	if(s[i]=='G'){last=i;break;}
 }
 
if(flag==0)cout<<n;
else if(first==-1)cout<<"0";
else{
	int mx=0;
	for(int i=0;i<n;i++)
	{
      if(s[i]=='S')
      {
      	int ans=pre[i]+nex[i];
        int l=i-pre[i];
        int r=i+nex[i];

        // cout<<i<<" "<<pre[i]<<" "<<nex[i]<<"\n";


         int flag=0;
        if(last<l || last>r)flag=1;
        if(first<l || first>r)flag=1;
        if(flag==1)mx=max(ans+1,mx);
        else mx=max(ans,mx);
      }
	}
	cout<<mx;
}




tr;

 
}}
 