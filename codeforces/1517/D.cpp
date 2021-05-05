// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005
const int N = 504;
int n, m, k, hor[N][N], ver[N][N];
int dp[N][N][11];
int solve(int i, int j, int left) {
 
    if(left == 0) return 0;
    if(dp[i][j][left] != -1) return dp[i][j][left];
    int ans = INF;
    if(j + 1 <= m) ans = min(ans, hor[i][j] + solve(i, j + 1, left - 1));
    if(j - 1 > 0) ans = min(ans, hor[i][j - 1] + solve(i, j - 1, left - 1));
 
    if(i + 1 <= n) ans = min(ans, ver[i][j] + solve(i + 1, j, left - 1));
    if(i - 1 > 0) ans = min(ans, ver[i - 1][j] + solve(i - 1, j, left - 1));
    return dp[i][j][left] = ans;
}
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
cin>>n>>m>>k;
 memset(dp, -1, sizeof(dp));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m - 1; j++) {
            cin>>hor[i][j];
        }
    }
 
    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= m; j++) {
            cin>>ver[i][j];
        }
    }
 
    if(k % 2 == 1) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
               cout<<"-1 ";
            }
           tr;
        }
        return 0;
    }
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout<<2 * solve(i, j, k / 2)<<" ";// we are solving for 2^10, because then we will get pack to the saem path;
        }
       tr;
    }

    // time complexity is 500*500*1024,, this is valid;


}
}