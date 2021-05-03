#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
// Function to check if x is power of 2



int dp[20]={0};

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
int n,b,a;
cin>>n>>b>>a;
int s[n+1];
int ans=0;
for(int i=1;i<=n;i++)cin>>s[i];
int mx=a;

for(int i=1;i<=n;i++)
{
  if(b==0 && a==0)break;
  if(s[i]==1)
  {
   if(b>=1 and a<mx)--b,++a;
   else --a;
   ++ans;
  }
  else
  {
    if(a>=1)--a; 
    else --b;
    ++ans;
  }
}



cout<<ans;
tr;
  


}

}
