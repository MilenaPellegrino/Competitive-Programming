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
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
//ll const INF = 1e18 + 10;
ll const MAXN = 1e18 + 10;
ll dp[MAXN];

string bin(ll x) {
    if (x == 0) {
        return "0"; 
    }
    string binario = ""; 
    while (x > 0) {
        ll bit = x % 2;
        binario = to_string(bit) + binario;
        x /= 2;
    }
    return binario; 
}
/*ll mxor(ll x, ll n, ll a, ll b){
	fore(i, 0, n){
		dp[i] = -1;
	}
	if(x == n)return abs((a^n) - (b^n));
	if(dp[x] != -1) return dp[x];
	ll r1 = abs((a^x) - (b^x));
	dp[x] = min(r1, mxor(x+1, n, a, b));
	return dp[x];
	
} */
void solve(){
	ll a, b, r; cin>>a>>b>>r;
	ll res = abs((a ^ 0) - (b^0));
	fore(i, 1, r){
		res = min(abs((a ^ dp[i]) - (b^dp[i])), res);
	} 
	// res = 
	pri(res);
}
int main(){
    FIN; 
    int t; cin>>t; 
    for(ll i =0; i<MAXN; i++){
		dp[i] = stoll(bin(i));
	}
    while(t--){
		solve();
	}
    return 0;
}
