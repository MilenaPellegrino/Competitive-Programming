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
    int n, k; cin>>n>>k; //n = 3, k = 10 
    vector<pair<int, int>> p(n);
    fore(i, 0, n){
        int a;  cin>>a;
        p[i].fst = a; 
    }
    fore(i, 0, n){
        int b;  cin>>b;
        p[i].snd = b; 
    }
    sort(ALL(p)); 
    fore(i, 0, n){
        if (p[i].fst <= k){
            k+=p[i].snd;
        } else {
            break;
        }
    }
    prnt(k);
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}