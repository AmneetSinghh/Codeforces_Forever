#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		
		ll n,k; cin>>n>>k;
		// we have to find the first interger that is divisible by k,, so that remainder is that baby
		ll l=1,r=2*k+1;
		while(l<r)
		{
		ll mid=(l+r)/2;
		if(mid-(mid/n)>=k)
		r=mid;// if mil gya,, then r aahi rahi
		else l=mid+1;
		

		}
		
		cout<<l<<endl;
	
	}
}
