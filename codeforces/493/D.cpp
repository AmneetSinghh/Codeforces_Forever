#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 100;
const int mod = 1e9 + 7;
int v[maxn << 2];


int main() 
{
	ios::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	if(n%2==0){
	cout<<"white\n";
	if(n==2)
	cout<<"1 2\n";
	else
	{
	ll r=1;
	ll c=2;
	cout<<r<<" "<<c<<endl;
	}
	
	
	}
	else
	{
		cout<<"black\n";
	}


}
