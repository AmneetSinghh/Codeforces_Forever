#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 100;
const int mod = 1e9 + 7;
int v[maxn << 2];

int update(int l, int r, int node, int p, int x) 
{
	if (l == r) 
	{
		v[node] = x;
		return 1;// level 1 from bottom down bro baby mera
		
	} 

		int mid = l + r >> 1;
		if (p <= mid) 
		p = update(l, mid, node *2, p, x);
		else 
		p = update(mid + 1, r, node *2+1, p, x);
		
		if (p % 2==1) 
		v[node] = v[node *2] | v[node *2+1];
		else
		v[node] = v[node *2] ^ v[node *2+1];
		
		return p + 1;// so that hun xor krn da tome rno
	
}



int main() 
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= (1 << n); ++i) 
	{
		int x;
		cin >> x;
		update(1, 1 << n, 1, i, x);
	}
	
	while(m--) 
	{
		int p,x;cin>>p>>x;
		update(1,1<<n,1,p,x);
		cout<<v[1]<<'\n';
	}
	return 0;
}
