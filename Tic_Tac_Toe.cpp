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
 int n,m,k;
 cin>>n>>m>>k;
 vp V(n*m);
 fo(i,0,n*m)
 {
    cin>>V[i].first>>V[i].second;
 }
 int low=1;
 int high=m*n;
 int mid;
 int A[n][m];
 int B[n][m];
 char c='A';
 int ans=-1;
 bool bb;
 while(low<=high)
 {
   mid=(low+high)/2;
   c='A';
   memset(A,0,sizeof(A));
   memset(B,0,sizeof(B));
   for(int i=0;i<mid;i++)
   {
     if(c=='A')
     {
         A[V[i].first-1][V[i].second-1]++;
     }
     else
     {
         B[V[i].first-1][V[i].second-1]++;
     }
     if(c=='A'){c='B';}
     else
     {
         c='A';
     }
   }
   int t;
   int sum1;
   int sum2;
   bb=false;
   fo(i,0,n)
   {
       fo(j,0,m)
       {
          t=0;
          if(i>0)
          {
              A[i][j]+=A[i-1][j];
              B[i][j]+=B[i-1][j];
              t++;
          }
          if(j>0)
          {
              A[i][j]+=A[i][j-1];
              B[i][j]+=B[i][j-1];
              t++;
          }
          if(t==2)
          {
              A[i][j]-=A[i-1][j-1];
              B[i][j]-=B[i-1][j-1];
          }
          if(i>=k-1 && j>=k-1)
          {
             t=0;
             sum1=A[i][j];
             sum2=B[i][j];
             if(i-k>=0)
             {
                sum1-=A[i-k][j];
                sum2-=B[i-k][j];
                t++;   
             }
             if(j-k>=0)
             {
                sum1-=A[i][j-k];
                sum2-=B[i][j-k];
                t++; 
             }
             if(t==2)
             {
                sum1+=A[i-k][j-k];
                sum2+=B[i-k][j-k];
             }
             if(sum1==(k*k) || sum2==(k*k))
             {
                bb=true;
             }
          }
       }
   }
   if(bb){ans=mid;high=mid-1;}
   else
   {
       low=mid+1;
   }
 }
 if(ans==-1){cout<<"Draw\n";return;}
 if(ans&1)
 {
     cout<<"Alice\n";
 }
 else
 {
     cout<<"Bob\n";
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