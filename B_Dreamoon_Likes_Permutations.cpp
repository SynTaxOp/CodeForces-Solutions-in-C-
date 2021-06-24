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
bool check(int k,int n,vi &V)
{
    vi C(n,0);
    fo(i,0,k)
    {
      C[V[i]-1]=1;
    }
    fo(i,0,k)
    {
       if(C[i]==0){return false;}
    }
    fo(i,0,n)
    {
        C[i]=0;
    }
    fo(i,k,n)
    {
        C[V[i]-1]=1;
    }
    fo(i,0,n-k)
    {
       if(C[i]==0){return false;}
    }
    return true;
}
void solve()
{
 int n;
 cin>>n;
 vin(V,n);
 int mx=*max_element(all(V));
 vi C(mx,0);
 vp P;
 if(check(mx,n,V))
 {
     P.push_back({mx,n-mx});
 }
 if(mx!=(n-mx) && check(n-mx,n,V))
 {
     P.push_back({n-mx,mx});
 }
 cout<<P.size()<<el;
 fo(i,0,P.size())
 {
     cout<<P[i].first<<" "<<P[i].second<<el;
 }
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