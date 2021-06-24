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
typedef map<char,int>mc;
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

void solve()
{
 int n;
 cin>>n;
 vin(V,n);
 vi dp(n+1,1);
 int ans=1;
 int f;
 fo(i,2,n+1)
 {
   f=1;
   while(f*f<=i)
   {
       if(i%f==0)
       {
           if(V[f-1]<V[i-1])
           {
               dp[i]=max(dp[i],dp[f]+1);
           }
           if(V[i/f-1]<V[i-1] && f!=1)
           {
               dp[i]=max(dp[i],dp[i/f]+1);
           }
       }
       f++;
   }
   ans=max(ans,dp[i]);
 }
//  print(dp);
 cout<<ans<<el;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc = 1;
  cin >> tc;
  while (tc--)
  {  
    solve();
  }
}