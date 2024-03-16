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
    int n; cin>>n; 
    vector<int> a(n);
    vector<int> r(n); 
    fore(i, 0, n)cin>>a[i];     
    int ri =0, l = n-1;
    fore(i, 0, n){
        if(i % 2 == 0 ){
            r[i] = a[ri++];
        } else {
            r[i] = a[l--];
        }
    }
    fore(i, 0, n)cout<<r[i]<<" ";
    cout<<"\n";
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}