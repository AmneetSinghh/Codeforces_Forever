// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   100005
 


int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){


int n;cin>>n;

int re=gcd(100,n);
cout<<100/re;
tr;
// int n;cin>>n;
// int mi=100;
// for(int i=0;i<=100;i++)
//   for(int j=0;j<=100;j++)
//   {
    
//     if(i+j>0)
//     {
//     double first=(i/double(i+j))*100;
//     double second=(j/double(i+j))*100;
//     if((first==n and second==100-n) || (first==100-n and second==n))
//     {
//       mi=min(mi,i+j);
//     }
//     }

//   }


// cout<<mi;
// tr;




}
}