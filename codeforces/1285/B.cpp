#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		bool flag=true;
		long long sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			sum1+=arr[i];
			sum2+=arr[n-1-i]; 
			if(sum1<=0||sum2<=0)
			{
				flag=false;break;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
    return 0;
}
 
