//****Code by Harry_Singh  B.tech(CSE)_2022_Passout. ****  
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// **************** Some Cool Observations***************
/*
1.x^0 + x^1 + x^2 + ..x^n < x^n+1
take an example->   same as 2^0<2^1, 2^0+2^1<2^2, 2^0+2^1+2^2<2^3 , 2^0+2^1+2^2+2^3<2^4 
Every x^n power is greater than sum of all prevoius powers of x.
-------------------------------------------------------------------------------------------------------------------------------
*/


int main()
{
	int t;cin>>t;while(t--){
	ll n;cin>>n;
	ll a[n+1];ll sum=0;
	ll count=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0){count++;++sum;}
		else
		sum+=a[i];
	}
	if(sum!=0)
	cout<<count<<endl;
	else
	cout<<count+1<<endl;
	
	
	
}}
