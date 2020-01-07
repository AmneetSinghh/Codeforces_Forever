#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n+1];
	int mx[1000006]={0};
	int temp[1000005]={0};
	int mxx=-1;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i];
	mx[a[i]]++;
	mxx=max(a[i],mxx);
	}
	
	
	int total_mx=0;
	
	
	for(int i=1;i<=mxx;i++)
	{
		if(mx[i])
		{
			int count=mx[i];
			if(count>=3)
			count=3;

				int index=i-1;
				int c=0;
				int value=3;
				while(value>0)
				{
					if(temp[index]==0){
					temp[index]++;
					c++;total_mx++;}
					if(c==count)
					break;
					index++;
					value--;
				}
				
		}
	}
		
	int total_mi=0;
	
	
	for(int i=1;i<=n;i++)
	if(mx[i]) ++total_mi,i+=2;
	


	cout<<total_mi<<" "<<total_mx<<endl;
}
