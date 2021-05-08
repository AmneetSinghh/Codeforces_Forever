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
int n=s.size();
int r=0,c=0;
int flag=0;
for(int i=0;i<n;i++){
  if(s[i]=='L')--r;
  if(s[i]=='R')++r;
  if(s[i]=='U')++c;
  if(s[i]=='D')--c;


  int x=0,y=0;
  for(int j=0;j<n;j++)
  {
    int first=x;
    int second=y;
  if(s[j]=='L')--x;
  if(s[j]=='R')++x;
  if(s[j]=='U')++y;
  if(s[j]=='D')--y;
  if(x==r && y==c){
    x=first,y=second;
  }
  }
  if(x==0 && y==0){
    flag=1;
    cout<<r<<" "<<c;
    tr;
    break;
  }
}

if(flag==0)cout<<"0 0\n";



}}