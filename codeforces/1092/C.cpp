// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005



int32_t main() 
{
int t=1;
// cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */


int n;
cin>>n;
vector<pair<string,int>> vc[202];
int dp[n*2]={0};

for(int i=1;i<=n*2-2;i++)
{
  string s;
  cin>>s;
  vc[s.size()].pb({s,i});
}


string first="";
string second="";
first+=vc[n-1][0].first;
first+=vc[n-1][1].first[n-2];

second+=vc[n-1][1].first;
second+=vc[n-1][0].first[n-2];
int flag=0;




for(int i=1;i<=n-1;i++)
{
 int one=1;
 int two=1;
 int three=1;
 int four=1;
 for(int j=0;j<vc[i][0].first.size();j++)
 {
   if(first[j]!=vc[i][0].first[j])one=0;
 }

 for(int j=0;j<vc[i][1].first.size();j++)
 {
   if(first[j]!=vc[i][1].first[j])two=0;
 }

  for(int j=0,m=n-1,k=vc[i][0].first.size()-1;j<vc[i][0].first.size();j++,m--,k--)
 {
   if(first[m]!=vc[i][0].first[k])three=0;
 }

 for(int j=0,m=n-1,k=vc[i][1].first.size()-1;j<vc[i][1].first.size();j++,m--,k--)
 {
   if(first[m]!=vc[i][1].first[k])four=0;
 }




 if(one and two)
 {
      if(three and four)dp[vc[i][0].second]=1,dp[vc[i][1].second]=2;
      else if(three)dp[vc[i][0].second]=2,dp[vc[i][1].second]=1;
      else if(four)dp[vc[i][0].second]=1,dp[vc[i][1].second]=2;
      else flag=1;
 }
 else if(one){
  dp[vc[i][0].second]=1;
  if(four==1)dp[vc[i][1].second]=2;
  else flag=1;
 }
 else if(two)
 {
  dp[vc[i][1].second]=1;
  if(three==1)dp[vc[i][0].second]=2;
  else flag=1;
 }
 else flag=1;

}




if(flag==1)
{
for(int i=1;i<=n-1;i++)
{
 int one=1;
 int two=1;
 int three=1;
 int four=1;
 for(int j=0;j<vc[i][0].first.size();j++)
 {
   if(second[j]!=vc[i][0].first[j])one=0;
 }

 for(int j=0;j<vc[i][1].first.size();j++)
 {
   if(second[j]!=vc[i][1].first[j])two=0;
 }

  for(int j=0,m=n-1,k=vc[i][0].first.size()-1;j<vc[i][0].first.size();j++,m--,k--)
 {
   if(second[m]!=vc[i][0].first[k])three=0;
 }

 for(int j=0,m=n-1,k=vc[i][1].first.size()-1;j<vc[i][1].first.size();j++,m--,k--)
 {
   if(second[m]!=vc[i][1].first[k])four=0;
 }




 if(one and two)
 {
      if(three and four)dp[vc[i][0].second]=1,dp[vc[i][1].second]=2;
      else if(three)dp[vc[i][0].second]=2,dp[vc[i][1].second]=1;
      else if(four)dp[vc[i][0].second]=1,dp[vc[i][1].second]=2;
      else flag=1;
 }
 else if(one){
  dp[vc[i][0].second]=1;
  if(four==1)dp[vc[i][1].second]=2;
  else flag=1;
 }
 else if(two)
 {
  dp[vc[i][1].second]=1;
  if(three==1)dp[vc[i][0].second]=2;
  else flag=1;
 }
 else flag=1;

}
}







for(int i=1;i<=n*2-2;i++){
  if(dp[i]==1)cout<<"P";
  else cout<<"S";
}
tr;



}}




