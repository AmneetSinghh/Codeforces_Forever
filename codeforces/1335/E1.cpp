#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

		int t;cin>>t;while(t--){
		int n;
		cin>>n;
		int a[n+4];
		int count[28][n+5];
	  for(int i=0;i<=27;i++)
	  for(int j=0;j<=n+2;j++)
	  count[i][j]=0;
	  
	  
		for(int i=1;i<=n;i++)
		cin>>a[i];
		
	  
	  
		
	  count[a[1]][1]++;
	  

	  for(int i=2;i<=n;i++)
	  {
	  	count[a[i]][i]++;
	  	for(int j=1;j<=26;j++)
	  	count[j][i]+=count[j][i-1];
	  	
	  }
	  
	  for(int j=1;j<=26;j++)
	  	count[j][n+1]+=count[j][n];
	  
	  

	  // now time to exeucte to all susbquences
	  int ans=0;

	  	  
	  	  for(int i=1;i<=26;i++)
	  	  ans=max(ans,count[i][n]);
	  	  
	  	  
	  	  
	  	  
	  	  
	  for(int l=1;l<=n;l++)
	  {
	  	for(int r=l;r<=n;r++)
	  	{
	  		int cinn=0,coutt=0;
	  		// cout<<l<<"  "<<r<<endl;
	  		for(int element=1;element<=26;element++)
	  		{
	  			 //1 1 2 2 3 2 1 1
	  			cinn=max(cinn,count[element][r]-count[element][l-1]);// count the number of elements in it;
	  			coutt=max(coutt,min(count[element][l-1],count[element][n+1]-count[element][r])*2);
	  			// cout<<cinn<<" "<<coutt<<"  "<<count[element][r]<<"  "<<count[element][l-1]<<" "<<count[element][n+1]<<"  ans-> "<<cinn+coutt<<endl;
	  		}
	  		ans=max(ans,cinn+coutt);
	  	}
	  }
	  cout<<ans<<endl;

	 }
	return 0;
}
