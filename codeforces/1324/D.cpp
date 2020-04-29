#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;
	vector<int> c(n);
	for (int i = 0; i < n; ++i) {
		c[i] = a[i] - b[i];
	}
	sort(c.begin(), c.end());// so we also have the negative values bro 
	
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		if (c[i] <= 0) 
		continue;// it means if current values is the negative then we can't do anything about it ;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		ans += i - pos;
	}
	
	cout << ans << endl;
	
	return 0;
}
