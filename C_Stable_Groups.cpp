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
 int n,k,x;
 cin>>n>>k>>x;
 vin(V,n);
 sort(all(V));
 vi G;
 int a;
 fo(i,0,n-1)
 {
     if(V[i+1]-V[i]>x)
     {
       a=V[i+1]-V[i];
       a=ceill(a,x);
       G.push_back(a-1); 
     }
 }
 if(G.size()==0){cout<<1<<el;return;}
 int grp=G.size()+1;
 sort(all(G));
 fo(i,0,G.size())
 {
     if(k>=G[i])
     {
         k-=G[i];
         grp--;
     }
 }
 cout<<grp<<el;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc = 1;
//   cin >> tc;
  while (tc--)
  {  
    solve();
  }
}