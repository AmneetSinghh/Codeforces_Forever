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
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
{
	char ch;
	cin>>ch;
	s[j].insert(ch);
	
}
}


for(int j=1;j<=m;j++)
{
	valu=(((valu)%mod )*((s[j].size())%mod))%mod;
}
cout<<valu<<endl;

}
