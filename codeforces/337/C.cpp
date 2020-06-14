#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define f first
#define s second
#define PI 3.14159265359
#define CS ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
ll n,m,k,mod=1e9+9;
ll power(ll a,ll b){
    if(!b)return 1;
    ll ret=power(a,b/2);
    ret*=ret%mod;
    if(b%2)ret*=a;
    return ret%mod;
}
int main(){
    CS;
    cin>>n>>m>>k;
    ll b=max((ll)0,(n/k)-(n-m));
    cout<<((power(2,b)*2-2)*k+m-b*k)%mod;
    return 0;
}