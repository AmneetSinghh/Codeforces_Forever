// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005


int32_t main() 
{
int t=1;
cin>>t;
while(t--){
int n;cin>>n;
string s;cin>>s;
int pre[n+1]={0};
int suf[n+1]={0};
int pre1[n+1]={0};
int suf1[n+1]={0};
for(int i=0;i<n;i++){
  if(s[i]=='*')pre[i]=1,pre1[i]+=i;
  pre[i]+=((i-1>=0)?pre[i-1]:0);
  pre1[i]+=((i-1>=0)?pre1[i-1]:0);
}



for(int i=n-1,j=0;i>=0;i--,j++){
  if(s[i]=='*')suf[i]=1,suf1[i]+=j;
  suf[i]+=((i+1<n)?suf[i+1]:0);
  suf1[i]+=((i+1<n)?suf1[i+1]:0);
}


int ans=INF;
for(int i=0,j=n-1;i<n;i++,j--){
    if(s[i]=='*')
    {
     int left=0;
     if(i-1>=0)left=((pre[i-1]*i)-pre1[i-1])-((pre[i-1]*(pre[i-1]+1))/2);
     int right=0;
     if(i+1<n)right=((suf[i+1]*j)-suf1[i+1])-((suf[i+1]*(suf[i+1]+1))/2);
     // cout<<i<<" "<<suf[i+1]<<" "<<pre[i-1]<<" "<<right;
     // tr;
     ans=min(left+right,ans);
   }
}



if(ans==INF)cout<<0;
else cout<<ans;
tr;

}
}