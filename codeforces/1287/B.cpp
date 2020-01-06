#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k,l,check,count=0;
	scanf("%d %d",&n,&m);
	string str;
	string c[n+6];
	for(i=0;i<n;++i)
	{
		cin >> c[i];
	}
	  map<string, int> cnt;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			str = "";
				for(l=0;l<m;++l)
				{
					if(c[i][l]==c[j][l])
					str+=c[i][l];
					else
					str+= 'S'+'E'+'T'-c[i][l]-c[j][l];
				}
				//cout<<str<<endl;
				if(cnt.find(str) != cnt.end())
        		count += cnt[str];
        		
		}
		
		cnt[c[i]]++;
	//	cout<<c[i]<<"  "<<	cnt[c[i]]<<"  "<<count<<endl;
	}
	printf("%d",count);
}
