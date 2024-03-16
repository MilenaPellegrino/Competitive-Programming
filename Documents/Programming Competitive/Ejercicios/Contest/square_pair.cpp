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

bool es(int num) {
    if (num < 0) {
        return false; 
    }

    int raizEntera = static_cast<int>(sqrt(num));
    return (raizEntera * raizEntera == num);
}
void solve(){
	int n; cin>>n; 
	int a1; cin>>a1; 
	int cont = 0;
	fore(1, 0, n){
		int a2; cin>>a2; 
		if(es(a1 * a2))cont++;
	}
}
 
int main(){
    FIN; 
    //int t = 1;
    //int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
