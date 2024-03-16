#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void solve(){
    int n, k, x; cin>>n>>k>>x; 
    int a[n+1] = {}; 
    fore(i, 1, n + 1){ 
        cin>>a[i];
    }
    sort(a + 1, a+ n + 1, greater<int>());
    fore(i, 1, n+1){
        a[i] += a[i-1]; 
    }
    int ans = -1e9;
    fore(i, 0, k+1){
        ans = max(ans, a[n] - 1 * a[min(i+x, n)] + a[i]);
    }
    pri(ans);
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }    
    return 0;
}