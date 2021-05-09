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

int n;
cin>>n;
string s;
cin>>s;
int pre[n+1]={0};
int next[n+1]={0};
int val=1;
for(int i=0;i<n;i++)
{
   if(i==0)pre[i]=val;
   else if(s[i]==s[i-1])
   {
    val=1;
    pre[i]=val;
   }
   else
   {
    ++val;
    pre[i]=val;
   }
}
val=1;
for(int i=n-1;i>=0;i--)
{
   if(i==n-1)next[i]=val;
   else if(s[i]==s[i+1])
   {
    val=1;
    next[i]=val;
   }
   else
   {
    ++val;
    next[i]=val;
   }
}





// for(int i=0;i<n;i++)cout<<pre[i]<<" "<<next[i]<<"\n";
for(int i=0;i<=n;i++)
{
  if(i==0)
  {
    if(s[i]=='R')cout<<next[i]+1;
    else cout<<"1";
  }
  else if(i==n)
  {
     if(s[i-1]=='L')cout<<pre[i-1]+1;
    else cout<<"1";
  }
  else
  {
   int val=1;
   if(s[i-1]=='L')val+=pre[i-1];
   if( s[i]=='R')val+=next[i];
   cout<<val;
  }
  cout<<" ";
}
tr;

}}