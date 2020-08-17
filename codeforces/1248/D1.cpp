#include <algorithm>
#include <cstdio>
#include <cstring>
 
const int N = 5e2 + 25;
 
int n, x = 1, y = 1, ans;
char s[N];
int main() {


	/// jsut a o(n) cube comlext
	scanf("%d%s", &n, s + 1);
	for (int i = 1; i < n; i++) {
		for (int j = i; j <= n; j++) {
			std::swap(s[i], s[j]);//          Swaps i know how to do
			int st = 0, c = 0, mn = 0;
			for (int k = 1; k <= n; k++) {

				// minimum closing of all occues when all braceks are closed baby
				s[k] == '(' ? st++ : st--;
				if (st == mn) c++;
				if (st < mn) mn = st, c = 1;
			}
			if (!st && c > ans) ans = c, x = i, y = j;
	
			std::swap(s[i], s[j]);
		}
	}
	printf("%d\n%d %d", ans, x, y);
}