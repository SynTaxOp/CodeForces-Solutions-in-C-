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

void solve()
{
 int n;
 cin>>n;
 vin(V,n);
 int a=0,b=0,c=0,d=0;
 int ans=0;
 fo(i,0,n)
 {
     if(V[i]==1){a++;}
     if(V[i]==2){b++;}
     if(V[i]==3){c++;}
     if(V[i]==4){d++;}
 }
 ans+=d;
 d=min(a,c);
 ans+=d;
 a-=d;
 c-=d;
 ans+=(b/2);
 b=b%2;
 ans+=c;
 if(b>0)
 {
    ans++;
    if(a>0){a-=2;}
 } 
 if(a>0)
 {
     ans+=ceill(a,4);
 }
 cout<<ans<<el;
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