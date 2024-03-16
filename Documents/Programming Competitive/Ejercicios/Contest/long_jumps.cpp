#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define DBGA(a, n) fore(i, 0, n)cout<<a[i]<<" ";
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 


void solve(){
    int n; cin>>n; 
    vector<int> a(n);
    fore(i, 0, n)cin>>a[i];
    vector<int> dp(n);
    for(int i=n-1; i>=0; i--){
        dp[i] = a[i];
        int j = i + a[i];
        if(j< n){
            dp[i] += dp[j];
        }
    }
    sort(ALL(dp));
    pri(dp[n-1]);
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}