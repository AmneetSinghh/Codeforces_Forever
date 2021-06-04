#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
 
#define X first
#define Y second
#define endl '\n'
 
const int N = 1e6 + 10;
const int MOD = 998244353;
 
int n, dp[N], S;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            dp[j]++;
        }
    }
    // for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
        int S=0;
    /// 2 has only one divisor;
    for (int i = 1; i <= n; i++) {
        dp[i] = (dp[i] + S) % MOD;
        S = (S + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
    return 0;
}