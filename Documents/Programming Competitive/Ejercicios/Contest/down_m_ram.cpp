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
    int n, k; cin>>n>>k; 
    vector<pair<int, int>> a(n);
    fore(i, 0, n)cin>>a[i].fst;
    fore(i, 0, n)cin>>a[i].snd;
    sort(ALL(a)); 
    //fore(i, 0, n)cout<<a[i].fst<<a[i].snd<<endl; 
    int res = k; 
    fore(i, 0, n){
        if(a[i].fst <= res)res+=a[i].snd;
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