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
	string s;cin>>s;
	int f=-1,se=-1;
	for(int i=0;i<s.length();i++){
	if(s[i]=='1'){f=i;break;}}
	
	for(int i=s.length()-1;i>=0;i--){
	if(s[i]=='1'){se=i;break;}}
	
	if(f==se || (f==-1 && se==-1))
	cout<<"0\n";
	else
	{
		int count=0;
		for(int i=f;i<=se;i++)
		{
			if(s[i]=='0')count++;
		}
		cout<<count<<endl;
	}
	
	

	
}}

