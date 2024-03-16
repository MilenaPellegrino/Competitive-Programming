#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define dbg(x) cout<<#x<< " = "<<(x)<<endl
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
	int ea = 0, eb = 0, eat = 1, ebt = 1;
	vii a(n), b(n);
	int a0; cin>>a0;
	a[0] = a0;
	fore(i, 1, n){
		int ai; cin>>ai; 
		a[i] = ai;
		dbg(ai); dbg(a[i-1]);
		if(ai == a[i-1]) eat++;
		else {
			ea = max(eat, ea);
			eat = 1;
		}
	}
	dbg(eat); dbg(ea);
	ea = max(eat, ea);
	int b0; cin>>b0;
	b[0] =b0;
	fore(i, 1, n){
		int bi; cin>>bi; 
		b[i] = bi;
		if(bi == b[i-1]) ebt++;
		else {
			eb = max(ebt, eb);
			ebt = 1;
		}		
	}
	eb = max(ebt, eb);	
	cout<<a<<endl;
	cout<<b<<endl;
	pri(ea); 
	pri(eb);
	pri(ea + eb);
	
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
