#include <bits/stdc++.h>
using namespace std;
int a[2002][2002],n,x1,y,x2,y2;
long long t1[4005],t2[4005],max1,max2;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",a[i]+j);
			t1[i-j+n]+=a[i][j];
			t2[i+j]+=a[i][j];
		}
	max1=-1;
	max2=-1;
	
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			long long tmp=t1[i-j+n]+t2[i+j]-a[i][j];
			if(i+j&1&&max1<tmp)
			{
				max1=tmp;
				x1=i;
				y=j;
			}
			else if(!(i+j&1)&&max2<tmp)
			{
				max2=tmp;
				x2=i;
				y2=j;
			}
		}
		cout<<max1+max2<<endl;
	printf("%d %d %d %d\n",x1+1,y+1,x2+1,y2+1);
	return 0;
}
