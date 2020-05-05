#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
const int maxn = 5e5 + 10;
 
int a[maxn], pre[maxn], nex[maxn];
ll dp[maxn], pd[maxn];
 
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
		
	// First of all We have to find the peak point,, where i-1 are non-descending  <-   i   ->    i+1 from all non-ascending.
		
	for (int i = 1; i <= n; i++)///                8 2 3 9 2 6 9 10
	{
		pre[i] = i - 1;
		// cout<<"\ncurrent pre[i]-> "<<pre[i]<<" index-> "<<i<<endl;;
		while (pre[i] > 0 and a[pre[i]] > a[i])
			pre[i] = pre[pre[i]];
			
			// cout<<"updated pre[i]-> "<<pre[i]<<endl;
		dp[i] = 1ll * a[i] * (i - pre[i]) + dp[pre[i]];
		// cout<<dp[i]<<" check now answer->  \n----------------------------------------"<<endl;
	}
	
	
	for (int i = n; i >= 1; i--)
	{
		nex[i] = i + 1;
		while (nex[i] < n + 1 and a[nex[i]] > a[i])
			nex[i] = nex[nex[i]];
		pd[i] = 1ll * a[i] * (nex[i] - i) + pd[nex[i]];
	}
	int idx = 1;
	for (int i = 1; i <= n; i++)
		if (dp[i] + pd[i] - a[i] > dp[idx] + pd[idx] - a[idx])
			idx = i;
	for (int i = idx + 1; i <= n; i++)
		a[i] = min(a[i], a[i-1]);
	for (int i = idx - 1; i >= 1; i--)
		a[i] = min(a[i], a[i+1]);
	for (int i = 1; i <= n; i++)
		cout << a[i] << " \n"[i == n];
}
