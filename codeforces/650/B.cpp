#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
using namespace std;
const int maxn=100005;
 
  
int32_t main() {
    int t=1;while(t--){
 int n,a,b,c;
 cin>>n>>a>>b>>c;
 string s;cin>>s;
 int dp[n*2+1]={0};
int j=1,i=1;
while(i<n){
  dp[j]=((s[i]=='h'?1:b+1));
  ++i,++j;
}
int start=j;
i=0;
while(i<n){
  dp[j]=((s[i]=='h'?1:b+1));
  ++i,++j;
}

int end=j;
int mi=INF,photo=0;
int ans=0;
int cur=0;
int photos=0;
i=start;
// for(int i=1;i<end;i++)cout<<dp[i]<<" "<<i<<"\n";
//   tr;

// Straigth one line;
while(i<end)
{
    if(ans+dp[i]+cur<=c){
    ans+=dp[i];
    cur+=a;
    ++photos;
   }  else break;
   ++i; 
  photo=max(photo,photos);

}
/*
16+ 6*2
10 2 3 32
hhwwhwhwwh
*/

--i;
// cout<<ans<<" "<<i-start<<" "<<i<<" "<<photos;
// tr;

j=start-1;// take it or not;
int left=1;
int right=(i-start);
cur=((min(left,right)*2)*a)+ (max(left,right)*a);


while(j>=1 && i>=start && right>=0)
{

if(photos>=n){photo=n;break;}
// cout<<ans<<" "<<dp[j]+cur<<" "<<cur<<" "<<photos<<" "<<i<<" "<<j<<" prev-> ";
// tr;
  if(ans+dp[j]+cur<=c)
  {
    ans+=dp[j];
    left++;
    j--;
    photos++;
  }
  else
  {
    // decrease i because we cant handle it;
    ans-=dp[i];
    i--;
    right--;
    photos--;

  }
  cur=((min(left,right)*2)*a)+ (max(left,right)*a);


// cout<<ans<<" "<<cur<<" "<<photos<<" "<<i<<" "<<j<<" next-> ";
// tr;
  photo=max(photos,photo);
  // cout<<"Max-> "<<photo;
  // tr;
}




cout<<photo;
tr;






}







 
    }
    
