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
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void solve(){
    int ma = -1001, mi = 10001;
    fore(i, 0, 4){
        int a, b; cin>>a>>b; 
        ma = max(ma, a);
        mi = min(mi, a);
    }
    cout<<(ma - mi) * (ma - mi)<<'\n';
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}