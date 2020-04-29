// very interesting question about the combanatorics ,,, also we learned alot about how to think and how to proceed if this type of question occurs just try to make the forumla

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353 
ll fact[300005]={0};

ll binpow(ll x, ll y)
{
    ll z = 1;
    while(y)
    {
        if(y & 1)
        z = ((z%mod)*(x%mod))%mod;
        x = ((x%mod)*(x%mod))%mod;
        y >>= 1;
    }
    return z;
}
// inverse
ll inv(ll a,ll b)
{
	ll check=((a%mod)*(binpow(b,mod-2))%mod)%mod;
	return check;
}
int main() 
{
	
	fact[0] = 1;
    for(int i = 1; i <=200005; i++)
    fact[i] = ((fact[i - 1]%mod)*(i)%mod)%mod;
	ll n,m;
	cin>>n>>m;
	if(n==2)
	cout<<"0\n";
	else
	{
		// first calculate the n!
		
		        //             m-1   formjla for combanotorics   n!/(n-k)!k!;
		        ll k=n-1;
		        ll value=inv(fact[m],(fact[k]*fact[m-k])%mod);
		    	value=((value%mod)*((n-2)%mod))%mod;
		    	value=(value*(binpow(2,n-3))%mod)%mod;
		    	cout<<value<<endl;
		    	
		      
	}
	
}
