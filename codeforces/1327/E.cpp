
#include <bits/stdc++.h>
using namespace std;

const int MOD=998244353;
#define ll long long
 int n,sum,sum1;
int mul(const int v1, const int v2, int mod=MOD) {
    return (int)((1LL * v1 * v2) % mod);
}
 
int toPower(int a, int p, int mod=MOD) {
    int res = 1;
    while (p != 0) {
        if (p & 1)
            res = mul(res, a, mod);
        p >>= 1;
        a = mul(a, a, mod);
    }
    return res;
}
 
int pl(int v1, int v2, int mod=MOD) {
    int res = v1 + v2;
 
    if (res < 0)
        res += mod;
 
    else if(res>=mod)
        res-=mod;
 
    return res;
}

void solve() {
    cin>>n;
    vector<int> ans;
    ll sum1=0;
    ll sum=0;
    for(int i=0; i<n; i++) 
    {
        int all=mul(i+1, toPower(10, i+1));
        int a=pl(all, -sum);
        ans.push_back(a);
        // every time adding in the exponential time bro
        sum1=pl(sum1, a);
        sum=pl(sum, a);
        sum=pl(sum, sum1);
    }
 
    for(int i=n-1; i>=0; i--)
        cout<<ans[i]<<" ";
    cout<<endl;
 
 
}
 
int main() {
    cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
        solve();
}
