#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	int a = 0, b = 0;
	
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		
		a += x / 2;
		b += (x + 1) / 2;
		
		swap(a, b);
	}
	
	cout << min(a, b);
}
