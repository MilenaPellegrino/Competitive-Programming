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
	int aa, bb, c; cin>>aa>>bb>>c;
	int a = max(aa, bb);
	int b = min(aa, bb);
	//bool band = true; 
	int cont = 0;
	while(a>b){
		a -=c; 
		b +=c;
		cont ++;
	}
	pri(cont);
}
 
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
		solve();
	}
    return 0;
}
