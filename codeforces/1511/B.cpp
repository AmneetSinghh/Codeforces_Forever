/* not_stable */
/* Practice to Improve */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 1e18
using namespace std; 


// const int maxn=100005;
// bool prime[maxn+1];
// set<int> s;
// void sieve()
// {

//     memset(prime, true, sizeof(prime));

//     for (int p=2; p*p<=maxn; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i=p*p; i<=maxn; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p=2; p<=maxn; p++)
//        if (prime[p]) s.insert(p);
// }
set<int> s;

bool isprime(int n)
{
    // Corner cases 
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int dig(int n){
  int t=0;
  while(n){
    ++t;
    n/=10;
  }
  return t;
}


void Not_Stable()
{    

  int a,b,c;
  cin>>a>>b>>c;
  int val=1;
  for(int i=1;i<=c-1;i++)val*=10;


int first=-1;
int second=-1;
for(auto sd:s){
if(first!=-1 && second!=-1   && first==second){
  second=-1;
  if(second==-1 && dig(val*sd)==b)second=val*sd;
}

if(first==-1 && dig(val*sd)==a)first=val*sd;
if(second==-1 && dig(val*sd)==b)second=val*sd;

}

cout<<first<<" "<<second;
tr;

}
 
 
 int start,n,i;
 
int32_t main() {
    io;
start=1;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}



start=10;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}




start=100;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}


start=1000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);


   ++start;
   ++i;
}




start=10000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}


start=100000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}


start=1000000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}


start=10000000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}



start=100000000;
n=start+100;
i=max(1ll,start-100);
while(i<=n){
   if(isprime(start))s.insert(start);
   ++start;
   ++i;
}


   int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}