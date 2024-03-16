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

int maxn = 1e9+10;
void solve(){
	int n; cin>>n; 
	vector<int> a(n+1); 
	fore(i, 0, n) cin>>a[i];
	a[n] = maxn;
	vector<int> b;
	fore(i, 0, n){
		if(a[i]<=a[i+1]){
			b.pb(a[i]);
		} else {
			b.pb(a[i]);
			b.pb(a[i+1]);
			//cout<<a[i]<<" "<<a[i+1]<<" ";
		}
	}
	pri(SZ(b));
	fore(i, 0, SZ(b)){
		cout<<b[i]<<" ";
	}
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
