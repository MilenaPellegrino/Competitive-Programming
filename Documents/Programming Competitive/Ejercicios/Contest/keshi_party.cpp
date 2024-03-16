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
const ll MAXN = 2e5 + 10; 
const ll MOD = 1e9 + 7; 
const ll inf = 1e9 + 10; 

ll q, n, a[MAXN], b[MAXN]; 

bool ok(ll x){
	ll c = 0; 
	for (ll i = 0; i < n; i++)
	{
		if(x-1-a[i]<= c && c<= b[i])c++; 
	}
	return c>=x;
}
void solve(){
	cin>>n; 
	for (ll i = 0; i < n; i++)
	{
		cin>>a[i]>>b[i];
	}
	ll l = -1, r = n+1, mid; 
	while (r - l > 1)
	{
		mid = (l + r)>>1; 
		if(ok(mid)) l = mid;
		else r = mid;
	}
	pri(l);
}
int main(){
    FIN;  
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
