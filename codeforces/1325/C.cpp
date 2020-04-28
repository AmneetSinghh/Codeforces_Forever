#include<bits/stdc++.h>
using namespace std;
int b[100000];
int main()
{
int n,i,v=0,s;
cin>>n;
s=n-2;
int a[n-1][2];
// just we have to find the number of leaves so then make it as 0,1,2,3 bro   so at once we can have two leaves so 2 is always the answer bro for me.
for(i=0;i<n-1;i++)
{
cin>>a[i][0]>>a[i][1];
b[a[i][0]]++;
b[a[i][1]]++;
}
 for(i=0;i<n-1;i++)
{
if(b[a[i][0]]==1||b[a[i][1]]==1)
cout<<v++<<endl;
else
cout<<s--<<endl;
}

}
