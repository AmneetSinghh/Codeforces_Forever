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

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){




int a,b,c,d;
cin>>a>>b>>c>>d;
vector<int> vc;
vc.pb(a),vc.pb(b),vc.pb(c),vc.pb(d);
sort(vc.begin(),vc.end());
int all=vc[3];
c=vc[3]-vc[0];
a=abs(vc[2]-c);
 b=abs(vc[1]-c);


cout<<c<<" "<<a<<" "<<b;
tr;









}

}