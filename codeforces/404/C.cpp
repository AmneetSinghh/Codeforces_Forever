#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = ((int)1e5) + 1;
 
int n;
long long k;
vector<int> a[MAXN];
 
int main() {
	ios_base::sync_with_stdio(0);
 
	cin >> n >> k;
	for(int v = 1; v <= n; v++) {
		int d;
		cin >> d;
		a[d].push_back(v);
	}
	
	bool ok = 1;
	for(int d = 1; d < n; d++) {
		if(a[d].size() > a[d-1].size() * (d > 1 ? (k-1) : k)) ok = 0;
	}
	ok &= (a[0].size() == 1);
	if(!ok) {
		cout << -1 << '\n';
		return 0;
	}
	
	cout << n-1 << '\n';
	for(int d = 1; d < n; d++) {
		for(int i = 0; i < a[d].size(); i++) {
			int j = i / (d > 1 ? (k-1) : k);
			cout << a[d-1][j] << " " << a[d][i] << '\n'; 
		}
	} 
	
	return 0;   
}