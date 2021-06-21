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
int ff(int n)
{
  return (n*(n+1)/2);  
}
void solve()
{
 int n,k,t;
 cin>>n>>k>>t;
 int f=t/k;
 int sum=0;
 if(f==0)
 {
    cout<<0<<el;return;
 }
 n--;
 sum+=ff(min(n,f));
 n-=min(n,f);
 sum+=(n*f);
 cout<<sum<<el;
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