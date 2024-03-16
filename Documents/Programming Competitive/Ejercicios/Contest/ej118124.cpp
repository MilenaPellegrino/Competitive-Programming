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

// combinations 
int calc(int n, int k){
    if(k ==0 || k ==n){
        return 1;
    } else{
        return calc(n-1, k-1) + calc(n-1, k);
    }
}

// Verifications conditions 
bool cumple(int a, int b, int c){
    return (a + b >c) && (a + c > b ) && (b + c > a);
}

int cont(vector<int> e, int k){
    int count = 0; 
    int n = SZ(e);

    // Sort 
    sort(ALL(e));

    // Count Combinations 
    fore (i, 0, n-2) {
        fore (j, i+1, n-1) {
            fore (l, j+1, n) {
                if (cumple (e[i], e[j], e[l])) {
                    count+= calc(n, k);
                }
            }
        }
    }
    return count; 

}
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    fore(i, 0, n){
        int b; cin>>b;
        a[i] = pow(2, b);
    }
    int res = cont(a, n);
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