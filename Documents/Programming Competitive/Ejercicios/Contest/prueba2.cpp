#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
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
	int a[n];
	unordered_map<int, int> m;
	fore(i, 0, n){
		cin>>a[i];
		m[a[i]] ++;
	}
	int k = 0;
	set<int>s, s2; 
	while(m[k]>=2){
		s.insert(k);
		s2.insert(k);
		k++;
	}
	if(m[k] > 0)pri(-1);
	else {
		int j = 0;
		fore(i, 0, n){
			if(s.find(a[i]) != s.end()) s.erase(a[i]);
			if(sz(s) == 0){
				j = i +1; 
				break;
			} 
			
		}
		fore(i, j, n){
			if(s2.find(a[i])!= s2.end()) s2.erase(a[i]);
		}
		if(sz(s2) == 0){
			pri(2);
			cout<<1<<" "<<j<<"\n";
			cout<<j+1<<" "<<n<<"\n";
		} else{
			pri(-1);
		}
	}
}
 
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
