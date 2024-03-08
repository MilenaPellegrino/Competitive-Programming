#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define ins insert
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void sol(){
    int n; // n = 4 
    cin >> n; 
 
    vector<ll> a(n); // a = {8, 15, 22, 30}
    fore(i, 0, n) {
        cin >> a[i];
    }
 
    ll res = 2; // res = 2 
    fore(i, 0, 61) {
        set<ll> aux; // aux = {}
        
        fore(i, 0, n) {
            aux.insert(a[i] % res);
        }
 
        if(SZ(aux) == 2) {
            cout << res << "\n";
            return;
        }
 
        res <<= 1;
    }
}
 
int main(){
    int t; cin >> t;
 
    while(t--){
        sol();
    }
 
    return 0;
}