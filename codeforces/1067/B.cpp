#include<cstdio>
#include<set>
#include<iostream>
using namespace std;
set<int>::iterator it;
const int maxn=1e5+10;
set<int>s[maxn],t,v;
int cnt[maxn];


/// i used the sets becasue thsi problem. is very interesing bay
int main(){
	int n,k,x,y;
	cin>>n>>k;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		s[x].insert(y);
		s[y].insert(x);
	}
	for(int i=1;i<=n;i++)
	if(s[i].size()==1)
	v.insert(i);
	while(n>1)
	{
		t.clear();
		for(it=v.begin();it!=v.end();it++)
		{
			int it2=*s[*it].begin();
			cnt[it2]++;
			t.insert(it2);
			s[it2].erase(*it);// delete the one baby
			n--;
		}
		for(it=t.begin();it!=t.end();it++)
		{
			if(cnt[*it]<3)
			{
				cout<<"No";
				return 0;
			}
			cnt[*it]=0;
		}
		swap(t,v);
		k--;
	}
	if(k==0)cout<<"Yes";
	else cout<<"No";
}