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
	int n, k; cin>>n>>k; 
	//vector<char> s; 
	int ca = 0, cb = 0; 
	fore(i, 0, n){
		char c; cin>>c; 
		if(c == 'A')ca++;
		else cb ++;
	}
	//DBG(ca); DBG(cb);
	if(k == cb){
		cout<<0<<"\n"; return;
	}
	if(cb> k){
		pri(1); cout<<cb - k<<" "<<"A"<<"\n";
	} else {
		pri(1); cout<<k-cb<<" "<<"B"<<"\n";
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
