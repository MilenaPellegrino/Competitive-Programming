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

void solve(){
	ll n; cin>>n; 
	vector<ll> a(n);
	fore(i, 0, n)cin>>a[i];
	sort(ALL(a));
	ll res = max(a[0] * a[1], a[n-1] *a[n-2]);
	pri(res);
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
		solve();
	}
    return 0;
}
