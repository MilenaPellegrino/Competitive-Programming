#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void solve(){
    int a, b, c; cin>>a>>b>>c; 
    int maxs= max({a, b, c});
    int mins = min({a, b, c});
    if((a == maxs && b == mins) || (a == mins && b == maxs)){
         prnt(c);
    } else if ((a == maxs && c == mins) || (a == mins && c == maxs)) {
        prnt(b);
    } else {
        prnt(a);
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