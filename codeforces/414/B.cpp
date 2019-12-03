#include<bits/stdc++.h>
using namespace std;
int t,n,ans,dp[2016][2016],M=1e9+7,i,j,k;
int main()
{
 
	 std::cin>>n>>t;
	 dp[0][1]=1;
	 for(i=1;i<=t;i++)
	 {
	 	///cout<<"For k ------ "<<i<<endl;
	 	for(j=1;j<=n;j++)
	 	{
	 		///cout<<" all multiples of "<<j<<"\n";
	 		for(k=j;k<=n;k+=j)
	 		{
	 			
	 				(dp[i][k]+=dp[i-1][j])%=M;
	 				//cout<<i<<" "<<j<<" "<<k<<"  "<<dp[i-1][j]<<"   "<<dp[i][k]<<endl;
	 				
	 		}
	 	}
	 }
	 	
	 		
	 		
	 for(i=1;i<=n;i++)
	 	(ans+=dp[t][i])%=M;
	 std::cout<<ans;
}
