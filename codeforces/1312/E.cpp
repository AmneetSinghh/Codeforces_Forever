#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
 
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
 
const int N = 1e5 + 10;
 
int main() {
	fast_cin();
	int n; cin >> n;
	vector<int> a(n);
	for (auto& i : a) {
		cin >> i;
	}
int mval[n+1][n+1];
for(int i=0;i<=n;i++)
for(int j=0;j<=n;j++)
mval[i][j]=-1;

for (int i = 1; i <=n; ++i)
		mval[i][i] = a[i-1];
		////                                              3 3 3 4 4 4 5 6
		
		// make teh all of length 2 baby
	for (int len = 2; len<=n; ++len) {    
		for (int i = 1, j = len; j <=n; ++i, ++j) { 
			
			
			for (int k = i; k<j; ++k) {
				if (mval[i][k] != -1 and mval[i][k] == mval[k + 1][j]) {
					mval[i][j] = mval[i][k] + 1;
				}
			}
		}
	}
	
	vector<int> dp(n + 1, n);
	dp[0]=0;
	for (int i = 1; i <=n; ++i)
	for (int j = i; j <=n; ++j)			
	if (mval[i][j] != -1) 
	dp[j] = min(dp[j], dp[i-1]+1);
				
				
	cout << dp[n] << endl;
}