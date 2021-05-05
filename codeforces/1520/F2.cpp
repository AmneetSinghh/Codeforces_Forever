// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005
int f[MAXN];
 
void add(int pos, int x) {
    for (; pos < MAXN; pos |= pos + 1)
        f[pos] += x;
}
 
int res(int l) {// this is sum;
    int sum = 0;
    for (; l >= 0; l = ((l + 1) & l) - 1)
        sum += f[l];
    return sum;
}
 
int res(int l, int r) {
    return res(r) - res(l - 1);
}
unordered_map<int, int> H;




int ask(int mid){
  if( H.find(mid)!= H.end()){
    return  H[mid]+res(mid);
  }
  cout << "? " << 1 << " " << mid << endl;
  int val;
  cin>>val;
   H[mid]=val-res(mid);// range from 1 to mid 1,//
  return val;
}


int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
int n,k,t;
cin>>n>>t;
while(t--){
cin>>k;
int l=1,r=n,ans=-1;
 while (l <= r) 
{
int mid = ((l + r)/2);
if (mid - ask(mid) >= k)
ans = mid, r = mid - 1;
else
l = mid + 1;
}
cout << "! " << ans << endl;
add(ans,1);// add one on the particular position;
}




}
}