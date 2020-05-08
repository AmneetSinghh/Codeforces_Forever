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
{int t;cin>>t;while(t--){
	ll n,g,b;cin>>n>>g>>b;
	if((n%2==0 && g>=n/2) || (n%2==1 && g>=((n/2)+1)))
	cout<<n<<endl;
	else
{
	ll value=0;
	if(n%2==0)
	{
	    ll fd=n/2;
	    ll dm=(fd/g);// how many goods baby
	    ll value=(dm*g)+(fd%g);
	    if(fd%g==0)
	    value+=((dm-1)*b);
	    else
	    value+=(dm*b);
	    
	    if(value<n)
	    cout<<value+(n-value)<<endl;
	    else cout<<value<<endl;
	    
	}
	else{
		
		ll fd=(n/2)+1;
	    ll dm=(fd/g);// how many goods baby
	    ll value=(dm*g)+(fd%g);
	    if(fd%g==0)
	    value+=((dm-1)*b);
	    else
	    value+=(dm*b);
	    if(value<n)
	    cout<<value+(n-value)<<endl;
	    else cout<<value<<endl;
	}
}
	

	
}}

