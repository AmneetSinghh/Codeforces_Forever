#include <bits/stdc++.h>

using namespace std;

#define sz(a) int((a).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) 
		cin >> it;
		vector<vector<int>> cnt(200, vector<int>(n + 1));
		vector<vector<int>> pos(200);
		for(int i=0;i<n;i++) 
		{
			
			for(int j=0;j<200;j++) 
			cnt[j][i + 1] = cnt[j][i];
			
			++cnt[a[i] - 1][i + 1];// 2 nd values is clear
			pos[a[i] - 1].push_back(i);// all teh indexes bro
		}
		
		int ans = 0;
		
		//1 1 1 1 2 2 3 1 2 1 1
		forn(i, 200) {
			
			ans = max(ans, sz(pos[i]));
			forn(p, sz(pos[i]) / 2) 
			{
				
				int l = pos[i][p] + 1, r = pos[i][sz(pos[i]) - p - 1];// 0 to 7 , 1 to 6 but we have to increment it bro
				forn(el, 200) 
				{
					int sum = cnt[el][r] - cnt[el][l];// we have to cut the pieces which has coverted by the out of left, and out of right
					ans = max(ans, (p + 1) * 2 + sum);
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}
