//Code written by:srejanbera

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vp;
typedef map<int, int> mi;
typedef unordered_map<int,int>umi;
typedef unordered_map<char,int>umc;
typedef unordered_map<int,vector<int>>graph;
typedef unordered_map<int,vector<pi>>wgraph;
typedef priority_queue<int> pq;
#define fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i++ : i--)
#define fa(i, N) for (auto i : N)
#define all(X) X.begin(), X.end()
#define ceill(a,b) ((a)/(b) + (((a)%(b))!=0))
#define bin(n) bitset<32>(n).to_string()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define el "\n"
#define vin(name,N) vi name(N);fo(i,0,N){cin>>name[i];}
#define print(V) fa(i,V){cout<<i<<" ";}cout<<el;
int A[10000001];
vi primes;
void primesieve(int N)
{
 for(int i=0;i<N+1;i++)
 {
  A[i]=i%2;
 }
 A[1]=0;
 A[2]=1;
 for(int i=3;i*i<=N;i=i+2)
 {
  if(A[i]==1)
  {
    for(int j=i*i;j<=N;j=j+i)
    {
      A[j]=0;
    }
  }
 }
 fo(i,1,N)
 {
   if(A[i]==1){primes.push_back(i);}
 }
}
int f(int a)
{
  int c=0;
  for(int i:primes)
  {
    if(i>a){break;}
    while(a%i==0)
    {
      c++;
      a/=i;
    }
  }
  if(a>1){c++;}
  return c;
}
void solve()
{
 int a,b,k;
 cin>>a>>b>>k;
 if(k==1)
 {
   if(a==b){no;return;}
   if(a%b==0 || b%a==0){yes;return;}
   no;return;
 } 
 k-=f(a);
 k-=f(b);
 if(k>0){no;return;}
 yes;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc = 1;
  cin >> tc;
  primesieve(31650);
  while (tc--)
  {  
    solve();
  }
}