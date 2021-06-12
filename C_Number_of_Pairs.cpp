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
 int a,b,k;
 cin>>a>>b>>k;
 if(k==1)
 {
    if(a!=b && (a%b==0  || b%a==0)){yes;return;}
    no;
    return;
 }
 int ca=0;
 int f=2; 
 while(a>=(f*f))
 {
    while(a%f==0)
    {
        ca++;
        a/=f;
    }
    f++;
 }
 if(a!=1){ca++;}
 int cb=0;
 f=2;
 while(b>=(f*f))
 { 
     while(b%f==0)
     {
         cb++;
         b/=f;
     }
     f++;
 }
 if(b!=1){cb++;} 
 if(ca+cb<k){no;return;}
 yes;
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