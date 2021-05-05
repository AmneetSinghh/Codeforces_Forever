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
// cin>>t;
while(t--){

int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];

int ans=0;
int odd[n+12]={0},even[n+12]={0};
for(int i=1;i<=n;i++){
 if(i%2==1)odd[i]=odd[i-1]+a[i],even[i]+=even[i-1];
 else even[i]=even[i-1]+a[i],odd[i]+=odd[i-1];
}


// for(int i=1;i<=n;i++)cout<<even[i]<<" "<<odd[i]<<"\n";

for(int i=1;i<=n;i++){
int ff=0,ss=0;
  if(i%2==1)
  {
    ff+=even[i-1];
    if(i+1<=n)ff+=(odd[n]-odd[i+1]);

    if(i-2>=0)ss+=odd[i-2];
    ss+=(even[n]-even[i]);
  }
  else
  {
     ss+=odd[i-1];
     if(i+1<=n) ss+=(even[n]-even[i+1]);


    if(i-2>=0)ff+=even[i-2];
    ff+=(odd[n]-odd[i]);
  }


// cout<<ff<<" "<<ss;
// tr;
  if(ss==ff)++ans;
}






cout<<ans;
tr;








}
}