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
    string a[n], b[n];
    fore(i, 0, n){
        char c; cin>>c;
        if(c == 'G')c = 'B';
        a[i] = c;
    }
    fore(i, 0, n){
        char c; cin>>c;
        if(c == 'G')c = 'B';
        b[i] = c;
    }
    int res = 0;
    fore(i, 0, n){
        if(a[i] != b[i]){
            res ++;
            cout<<"NO"<<"\n";
            break;
        }
    }
    if(res == 0 )cout<<"YES"<<"\n";
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}