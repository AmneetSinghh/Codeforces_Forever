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
cin>>t;
while(t--){


int a,b;
cin>>a>>b;



if(b==1 || (a==1 && b==1))cout<<"NO\n";
else
{
  cout<<"YES";
  tr;
  if(a==1)
  {
      if(b==2)cout<<a<<" "<<a*((b*2)-1)<<" "<<a*b*2;
        else cout<<a<<" "<<a*(b-1)<<" "<<a*b;
        tr;
  }
  else{
    int val=a*(b*2);
    if(b%2==0)
      {
        if(b==2)cout<<a<<" "<<a*((b*2)-1)<<" "<<a*b*2;
        else cout<<a<<" "<<a*(b-1)<<" "<<a*b;
      }
    else
      cout<<a<<" "<<a*(b-1)<<" "<<a*b;
  }
  tr;
}

 
}
}