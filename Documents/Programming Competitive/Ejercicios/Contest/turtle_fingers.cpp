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
const int MAXN= 1e4;
int exp(int a, int b){
	int res = 1; 
	while (b > 0) {
        if (b % 2 == 1) {
            res *= a;
        }
        a *= a;
        b /= 2;
    }

    return res;
}

void solve(){
	int a, b, l; cin>>a>>b>>l; 
    unordered_set<int> st;
    int i = -1;
    while(i++ < MAXN){
        int x = exp(a, i);
        if (x > l)  break;
        int j = -1;
        while(j++ < MAXN){
            int y = x*exp(b, j);
            if (y > l) break;
            if (l % y == 0) st.insert(l/y);
        }
    }
    pri(SZ(st));
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
