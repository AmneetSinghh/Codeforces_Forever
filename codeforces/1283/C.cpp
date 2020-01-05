#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n;
cin>>n;
int a[n+1];
int hash[300005]={0};
for(int i=1;i<=n;i++){
cin>>a[i];
hash[a[i]]++;}
set<int> vc;
for(int i=1;i<=n;i++){
if(hash[i]==0)
vc.insert(i);}




for(int i=1;i<=n;i++)
{
	if(a[i]==0 && hash[i]==0)
	{
		for(auto it=vc.begin();it!=vc.end();it++)
		{
			if(*it!=i)
			{
				a[i]=*it;
				hash[*it]++;
				vc.erase(it);
				break;
			}
		}
	}

}

for(int i=1;i<=n;i++)
{
	if(a[i]==0)
	{
		for(auto it=vc.begin();it!=vc.end();it++)
		{
			if(*it!=i)
			{
				a[i]=*it;
				vc.erase(it);
				break;
			}
		}
	}
}

for(int i=1;i<=n;i++)
cout<<a[i]<<" ";
cout<<endl;

	return 0;
}
