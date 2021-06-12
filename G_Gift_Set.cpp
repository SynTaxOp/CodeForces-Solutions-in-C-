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
int rec(int x,int y,int a,int b)
{
    int c1=min(x/a,y/b);
    int c2=min(x/b,y/a);
    if(c1+c2==0){return 0;}
    if(c1==c2)
    {
        return c1+max(rec(x-(c1*a),y-(c1*b),a,b),rec(x-(c1*b),y-(c1*a),a,b));
    }
    if(c2>c1)
    {
      return c2+rec(x-(c2*b),y-(c2*a),a,b);
    }
    else
    {
      return c1+rec(x-(c1*a),y-(c1*b),a,b);
    }
}
void solve()
{
 int x,y,a,b;
 cin>>x>>y>>a>>b;
 cout<<rec(x,y,a,b)<<el;
 
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