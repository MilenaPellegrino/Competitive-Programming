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
    int n; cin>>n; // number of boxes
    string s; cin>>s; 
    string f; cin>>f; 
    int c1 = 0, c2 = 0, u1 =0, u2 =0;
    int difg = 0; 
    fore(i, 0, SZ(s)){
        if(s[i] == '0'){
            c1 ++; 
        } else {
            u1 ++;
        } 
        if(f[i] == '0'){
            c2 ++;
        } else {
            u2 ++;
        }
        if((s[i] == '0' && f[i] != '0' ) || (s[i] == '1' && f[i] != '1')){
            difg ++;
        }  
    }
    int difm = min(c1 - c2, u1 - u2);
    int a = (difg - (abs(difm))) / 2;
    int res = abs(difm) + a; 
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