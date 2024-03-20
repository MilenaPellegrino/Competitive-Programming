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
	int  n, k; cin>>n>>k; 
	vpi a1r(n+1), a2r(n+1);
	fore(i, 1, n+1){
		a1r[i] = make_pair(0, i);
		a2r[i] = make_pair(0,i);
	}
	fore(i, 1, (2*n)+1){
		int ai; cin>>ai;
		if(i<=n){
			a1r[ai].fst++;
		} else if(i>n){
			a2r[ai].fst++;
		}
	}
	sort(all(a1r)); 
	sort(all(a2r));
	vii a1p, a2p;  
	//fore(i, 1, n+1) cout<<"("<<a1r[i].fst<<" "<<a1r[i].snd<<") ";
	//cout<<"\n";
	//fore(i, 1, n+1) cout<<"("<<a2r[i].fst<<" "<<a2r[i].snd<<") ";
	//cout<<"\n";
	int cont = 0;
	fore(i, 1, n+1){
		if(k>0){
			if(a1r[i].fst == 0){	
				a1p.pb(a2r[i].snd);
				a1p.pb(a2r[i].snd);
				a2p.pb(a1r[i].snd);
				a2p.pb(a1r[i].snd);
				k--;
			} else if(a1r[i].fst == 1){
				a1p.pb(a1r[i].snd);
				a2p.pb(a2r[i].snd);
				if(cont == 1){ // meti los dos
					k--; 
					cont = 0;
				} else cont++;
			} else { // =  2
				a1p.pb(a1r[i].snd);
				a1p.pb(a1r[i].snd);
				a2p.pb(a2r[i].snd);
				a2p.pb(a2r[i].snd);
				k--;
			}
		} else {
			break;
		}
	} 
	for(auto elem:a1p){
		cout<<elem<<" ";
	}
	cout<<"\n";
	for(auto elem: a2p) cout<<elem<<" ";
	cout<<"\n";
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
