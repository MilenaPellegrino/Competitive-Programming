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
	int n; cin>>n; 
	int a = -1, b = -1;
	int ca = 1, cb = 1; 
	fore(i, 0, n){
		int c; cin>>c; 
		if(a == -1){
			a = c;
		} else if (a == c){
			ca++;
		}else if (b ==-1){
			b = c;
		} else if (c == b){
			cb++;
		} else{
			cout<<"No"<<"\n"; return;
		}
		DBG(a); DBG(b); DBG(ca); DBG(cb);
	}
	if(n%2 == 0){
		if(ca == cb || abs(ca - cb) == n-1)cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}else {
		if(abs(ca - cb) == 1 || abs(ca - cb) == n-1)cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
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
