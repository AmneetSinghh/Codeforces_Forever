#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;


int32_t main() {
    int t=1;
    cin>>t;
    while(t--){


int n;
cin>>n;
int flag=0;
int count=0;
while(true)
{
int one=2050;
if(n<one)break;
while(one*10<=n)
{
  one*=10;
} 

++count;
n-=one;
if(n==0){flag=1;break;}
}



if(flag==1)cout<<count;
else cout<<"-1";



tr;





    }
     
}