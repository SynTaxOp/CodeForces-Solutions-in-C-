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
 string s;
 cin>>s;
 set<pair<pi,pi>>S;
 int x,y,x1,y1;
 x=0;
 y=0;
 pair<pi,pi>A;
 pair<pi,pi>B;
 int ans=0;
 fa(i,s)
 {
     if(i=='N')
     {
       y1=y+1;
       x1=x;  
     }
     if(i=='S')
     {
        y1=y-1;
        x1=x; 
     }
     if(i=='W')
     {
       x1=x+1;
       y1=y;  
     }
     if(i=='E')
     {
       x1=x-1;
       y1=y;  
     }
     A={{x,y},{x1,y1}};
     B={{x1,y1},{x,y}};
     if(S.find(A)==S.end() && S.find(B)==S.end())
     {
        ans+=5;
        S.insert(A);
     }
     else
     {
         ans+=1;
     }
     x=x1;
     y=y1;
 }
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