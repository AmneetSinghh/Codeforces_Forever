#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,i,x,s,f,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		f=1;
		int bit[70]={0};
		for(i=0;i<n;++i)
		{
			cin>>x;
			j=0;
			while(x)
			{
				s=x%k;
				bit[j++]+=s;
				x/=k;
			}

		}
		for(i=0;i<=69;++i)
		{
			if(bit[i]>1)
			{
				f=0;
				break;
			}
		}
		if(f)
		 cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	}
}
