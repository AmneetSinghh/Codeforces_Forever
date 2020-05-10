#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		
		ll n;cin>>n;ll a[n+1];
		for(int i=1;i<=n;i++)cin>>a[i];
		ll l=1,r=n,moves=0,cur_a=0,cur_b=0,aa=0,bb=0,flag=0,count=0;;
		while(l<=r)
		{
			if(flag==0)
			{
			cur_a=0;
			for(ll i=l;i<=r;i++)
			{ 
				if(cur_a<=cur_b)
				cur_a+=a[i]; 
				else break;
				++l;
			}
			aa+=cur_a;
			flag=1;
			}
			else
			{
			cur_b=0;
			for(ll i=r;i>=l;i--)
			{ 
				if(cur_b<=cur_a)
				cur_b+=a[i]; 
				else	break;
				--r;
				
			}
			bb+=cur_b;
			flag=0;
			}
			++count;
			
			

		}
		
		
		cout<<count<<" "<<aa<<" "<<bb<<endl;
	
	
	}
}
