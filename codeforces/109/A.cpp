#include <bits/stdc++.h>
using namespace std;
int a[2002][2002],n,x1,y,x2,y2;
long long t1[4005],t2[4005],max1,max2;
#define mod 1000000007
set<char > s[1005];
long long valu=1;
int main()
{
int n,m;
cin>>n;
if(n<4 || n==5 || n==6 || n==9 || n==13 || n==17 || n==10)
cout<<"-1\n";
else
{
	int hash_f[1000010]={0};
int hash_s[1000010]={0};
hash_f[4]=1;
hash_s[7]=1;
for(int i=4;i<=n;i++)
{
	if(hash_f[i])
	{
		if(	hash_f[i+4]==0 && hash_s[i+4]==0)
		hash_f[i+4]=hash_f[i]+1;
		
		if(	hash_f[i+7]==0 && hash_s[i+7]==0)
		{
	        hash_f[i+7]+=hash_f[i];
		    hash_s[i+7]+=(hash_s[i]+1);
		}
	}
	else if(hash_s[i])
	{
		if(	hash_f[i+4]==0 && hash_s[i+4]==0)
		{
					hash_f[i+4]+=(hash_f[i]+1);
					hash_s[i+4]+=hash_s[i];
		}
		
		if(	hash_f[i+7]==0 && hash_s[i+7]==0)
		{
	        hash_f[i+7]+=hash_f[i];
		    hash_s[i+7]+=(hash_s[i]+1);
		}
	}
}

for(int i=1;i<=hash_f[n];i++)
cout<<"4";
for(int i=1;i<=hash_s[n];i++)
cout<<"7";


cout<<endl;
}

}
