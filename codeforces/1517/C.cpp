#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;
int32_t main() {
    int t=1;
    // cin>>t;
    while(t--){

/*

6
1 2 4 5 3 6

*/
int n;
cin>>n;
int p[n+1];
int a[n+1][n+1];
memset(a,0,sizeof a);
for(int i=1;i<=n;i++)cin>>p[i],a[i][i]=p[i];
int flag=0;
// for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++)cout<<a[i][j]<<" ";
//             tr;
//     }



// cout<<"Start\n";

for(int i=1;i<=n;i++)
{
    int val=p[i];
    int count=val-1;
    int r=i,c=i;
    // move left;

// cout<<"new-> ";
// tr;

//     cout<<r<<" "<<c<<" "<<count<<" "<<val;
//     tr;
    while(true)
    {
    int move=1;
    if(count==0)break;
    while(c-1>=1 && count && a[r][c-1]==0)
    {
     --c;
     a[r][c]=val;
     --count;
     move=0;
    }

    // move down then try left;
    // at least one; we must take;
    if(count==0)break;
    if(r+1>n){flag=1;break;}
    ++r;
    a[r][c]=val;
    move=0;
    --count;


    // cout<<count<<" "<<move<<" "<<r<<" "<<c<<" "<<a[r][c];
    // tr;
    if(count==0)break;

    while(r+1<=n && count)
    {
       if(c-1>=1 && a[r][c-1]==0){ --c; a[r][c]=val;--count; break;}
       ++r;
       a[r][c]=val;
       --count;
    }

   if(move==1)break;

    }
 

 // cout<<"After\n";
 // for(int l=1;l<=n;l++){
 //        for(int m=1;m<=l;m++)cout<<a[l][m]<<" ";
 //            tr;
 //    }


    if(count){flag=1;break;}
}




if(flag==1)cout<<"-1\n";
else {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)cout<<a[i][j]<<" ";
            tr;
    }
}








    }
     
}