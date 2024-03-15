#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

void solve(){
	int n; cin>>n; 
	vii a(n); fore(i, 0, n) cin>>a[i];
	vii b(n); fore(i, 0, n) cin>>b[i]; 
	string res = "Yes";
	fore(i, 0, n-1){
		if(a[i] > a[n-1]) res = "No";
		if(b[i] > b[n-1]) res = "No";
	}
	if(res == "No"){
		fore(i, 0, n){
			if(b[i] <= a[n-1]) res = "Yes";
			if(a[i] <= b[n-1]) res = "Yes";
		}
	}
    cout << res << "\n";
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
