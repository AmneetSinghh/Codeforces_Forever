// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   1004
int32_t main() 
{
int t=1;
cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */

string s;cin>>s;
sort(s.begin(),s.end());

if(s.size()==1){
  cout<<"-1";
  tr;
}
else
{
  int flag=0;
  for(int i=1;i<s.size();i++){
  if(s[i]!=s[i-1])flag=1;
}

if(flag==1)cout<<s;
else cout<<"-1";

tr;
}


}}