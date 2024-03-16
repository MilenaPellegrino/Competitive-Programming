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

int r(int a, int b){
    return abs(a - b);
}
void solve(){
    int n, m; cin>>n>>m; 
    deque<int> ai; 
    deque<int> bi;
    int res = 0;
    fore(i, 0, n){
        int a; cin>>a; ai.pb(a);
    }
    fore(i, 0, m){
        int b; cin>>b; bi.pb(b);
    }
    sort(ALL(ai)); 
    sort(ALL(bi), [](int aa, int bb) { return aa > bb; });
         int aux = n;
    while(aux--){
         if(r(ai[0], bi[0]) >= r(ai.back(), bi.back())){
            res += r(ai[0], bi[0]);
            ai.pop_front();
            bi.pop_front();
         } else {
            res+=r(ai.back(), bi.back());
             ai.pop_back();
             bi.pop_back();
         }
    }
    pri(res);
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}