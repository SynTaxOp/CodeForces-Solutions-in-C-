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
 int check(string &S,int k,int s)
 {
     int c;
     int ans=S.size();
     for(int i=0;i<k;i++)
     {
        c=s;
        for(int j=i;j<S.size();j+=k)
        {
            if(S[j]=='1'){c--;}
            else
            {
               c++;
            }
        }
        ans=min(ans,c);
     }
     return ans;
 }
 void solve()
 {
  int n;
  cin>>n;
  string S;
  cin>>S;
  int s=0;
  fo(i,0,n)
  {
     if(S[i]=='1'){s++;} 
  }
  if(s==1 || s==n){cout<<0<<el;return;}
  int ans=n;
  int i=1;
  while(i*i<=n)
  {
    if(n%i==0)
    {
      ans=min(ans,check(S,n/i,s));
      ans=min(ans,check(S,i,s));
    }
    i++;
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