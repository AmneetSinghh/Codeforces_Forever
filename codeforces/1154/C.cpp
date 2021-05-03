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

dp[1]=1;
dp[2]=2;
dp[3]=3;
dp[4]=1;
dp[5]=3;
dp[6]=2;
dp[7]=1;
for(int i=8,j=1;i<=14;i++,j++)dp[i]=dp[j];

  int a,b,c;
  cin>>a>>b>>c;

 int first=a/3;
 int rem_a=a%3;
 int second=b/2;
 int rem_b=b%2; 
 int third=c/2;
 int rem_c=c%2;
int kon=min(first,min(third,second));
int ans=min(first,min(third,second))*7;





// cout<<kon<<" "<<ans;
// tr;
int mx=0;
if(first==kon)
{
   a=rem_a;
   if(second>first)b=2;
   else b=rem_b;
   if(third>first)c=2;
   else c=rem_c;


   // cout<<a<<" "<<b<<" "<<c;
   // tr;
   for(int i=1;i<=7;i++)
   {
     int one=a;
     int two=b;
     int three=c;
     // cout<<i<<" "<<one<<" "<<two<<" "<<three<<"\n";
     int range=0;
     for(int j=i;j<=14;j++){
      if(dp[j]==1 && one>=1) --one;
      else if(dp[j]==2 && two>=1)--two;
      else if(dp[j]==3 && three>=1)--three;
      else break;
      ++range;
     }
     // cout<<"-> "<<range;
     // tr;
     mx=max(range,mx);
   }


}
if(second==kon)
{
  // second is min;
   if(first>second)first=3;
   else first=rem_a;
   b=rem_b;
   if(third>second)c=2;
   else c=rem_c;
   for(int i=1;i<=7;i++)
   {
     int one=a;
     int two=b;
     int three=c;
     int range=0;
     for(int j=i;j<=14;j++){
      if(dp[j]==1 && one>=1) --one;
      else if(dp[j]==2 && two>=1)--two;
      else if(dp[j]==3 && three>=1)--three;
      else break;
      ++range;
     }
     mx=max(range,mx);
   }


}
if(third==kon)
{
  // second is min;
   if(first>third)first=3;
   else first=rem_a;
   if(second>third)b=2;
   else b=rem_b;
   c=rem_c;
   for(int i=1;i<=7;i++)
   {
     int one=a;
     int two=b;
     int three=c;
     int range=0;
     for(int j=i;j<=14;j++){
      if(dp[j]==1 && one>=1) --one;
      else if(dp[j]==2 && two>=1)--two;
      else if(dp[j]==3 && three>=1)--three;
      else break;
      ++range;
     }
     mx=max(range,mx);
   }

}


cout<<ans+mx;
tr;


}

}