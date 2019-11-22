#include <bits/stdc++.h>
using namespace std;
int a[2002][2002],n,x1,y,x2,y2;
long long t1[4005],t2[4005],max1,max2;
#define mod 1000000007
set<char > s[1005];
long long valu=1;
int main()
{
int n;cin>>n;
int a[n+1];
if(n==1){
cout<<"-1\n";
return 0;}
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int cf,index;
if(n>2)
 cf=min(a[1]-a[0],a[2]-a[1]),index=-1;
 else
 cf=a[1]-a[0],index=-1;
for(int i=1;i<n;i++)
{
	if(a[i]-a[i-1]!=cf)
	{
		if(a[i]-a[i-1]==cf*2 && index==-1)
		index=i-1;
		else{
		cout<<"0\n";
		return 0;}
	}
}
if(cf==0)
cout<<"1\n"<<a[0]<<endl;
else if(index!=-1)
cout<<"1\n"<<a[index]+cf<<endl;
else if(index==-1 && n==2 &&(a[1]-a[0])%2==0)
cout<<"3\n"<<a[0]-cf<<" "<<(a[0]+a[1])/2<<" "<<a[1]+cf<<endl;
else if(index==-1)
cout<<"2\n"<<a[0]-cf<<" "<<a[n-1]+cf<<endl;

}
