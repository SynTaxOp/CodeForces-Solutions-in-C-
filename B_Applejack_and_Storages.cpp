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
 multiset<int>S;
 multiset<int>R;
 umi M;
 fo(i,0,n)
 {
    M[V[i]]++;
    if(M[V[i]]%4==0)
    {
      R.erase(R.find(V[i]));
      S.insert(V[i]);
    }
    if(M[V[i]]%2==0 && M[V[i]]%4!=0)
    {
        R.insert(V[i]);
    }
 }
 int q;
 cin>>q;
 int a;
 char c;
 fo(i,0,q)
 {
     cin>>c;
     cin>>a;
     if(c=='+')
     {
       M[a]++;
       if(M[a]%4==0)
       {
           R.erase(R.find(a));
           S.insert(a);
       }
       if(M[a]%2==0 && M[a]%4!=0)
       {
           R.insert(a);
       }
     }
     else
     {
        if(M[a]%4==0)
        {
           S.erase(S.find(a));
           R.insert(a);
        }
        if(M[a]%2==0 && M[a]%4!=0)
        { 
           R.erase(R.find(a));
        }
        M[a]--;
     }
     if(S.size()>=2 || (S.size()==1 && R.size()>=2)){yes;}
     else
     {
         no;
     }
 }
  
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