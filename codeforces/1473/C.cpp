#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;
int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  

bool check(string s,string t){
  int i=0,j=0;
  int flag=0;

  if(t.size()%s.size()!=0)return false;
  while(i<t.size()){
  if(s[j]==t[i]){
    ++i,++j;
  }
  else {flag=1;break;}
  if(j>=s.size())j=0;
}

if(flag==0)return true;
return false;

}

int32_t main() {
    int tt=1;
    cin>>tt;
    while(tt--){

int n,k;
cin>>n>>k;
int dp[n+1];
for(int i=1;i<=k;i++)dp[i]=i;
int start=k-1;
for(int i=k+1,j=1;j<=(n-k);i++,j++){
dp[i]=start;
--start;
}


// for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
// tr;





int p[k+1];
int ans=(n-k);
p[k-ans]=k;
for(int i=(k-ans)+1,j=k-1;i<=k;i++,j--)p[i]=j;
for(int i=1;i<k-ans;i++)p[i]=i;



for(int i=1;i<=k;i++)cout<<p[i]<<" ";
  tr;



}}
