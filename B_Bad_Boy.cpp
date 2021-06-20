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
int dis(int x,int y,int a,int b)
{
    int d=0;
    d+=abs(a-x);
    d+=abs(b-y);
    return d;
}

void solve()
{
 int n,m,x,y;
 cin>>n>>m>>x>>y;
//  if(n==1 && m==1){cout<<1<<" "<<1<<" "<<1<<" "1<<el;return;}
 pi a;
 pi b;
 int d=-1;
 int v;
 vp V={{1,1},{n,1},{1,m},{n,m}};
 fo(i,0,4)
 {
     fo(j,0,4)
     {
       v=dis(x,y,V[i].first,V[i].second)+dis(V[i].first,V[i].second,V[j].first,V[j].second);
       if(v>d)
       {
           a=V[i];
           b=V[j];
           d=v;
       }  
     }
 }
 cout<<a.first<<" "<<a.second<<" "<<b.first<<" "<<b.second<<el;
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