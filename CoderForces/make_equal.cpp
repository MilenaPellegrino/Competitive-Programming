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
	int f = 1, e = 1; 
	int i = 0, j = n-1; 
	while(a[j] == a[j-1]){
		e++; 
		j--;
	}
	while(a[i] == a[i+1]){
		i++; 
		f++;
	}
	if(a[0] == a[n-1]){
		int ans = n - f - e;
		if(ans<= 0) pri(0);
		else pri(ans);
		return;
	}
	int ans = n - max(f, e);
	if(ans <= 0) pri(0);
	else pri(ans);
	
	
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
