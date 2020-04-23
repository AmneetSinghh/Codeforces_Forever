#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	int f=0,s=0,ff,ss;
	// if(a-b<=0)
	// f=0; 
 //  else
   f=a-b;
   s=a+b;
   
   //if(c-d<=0) ff=0;else 
   ff=c-d;
   ss=c+d;
   int flag=0;

   	if(f*n>ss || s*n<ff)
   	cout<<"No\n";
   	else
   	cout<<"Yes\n";
	
	

		
	}
	
}
