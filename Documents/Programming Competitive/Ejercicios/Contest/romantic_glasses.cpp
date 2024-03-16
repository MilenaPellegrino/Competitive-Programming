#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void solve(){
    ll n; cin>>n; 
    vector<ll> v(n+1);
    for(ll i =1; i<= n; i++)cin>>v[i];
    unordered_map<ll,ll> diff; 
    ll even = 0, odd = 0; 
    string ans = "NO"; 
    for(ll i =1; i<= n; i++){
        if( i%1){
            odd += v[i];
        } else {
            even += v[i];
        }
        ll dif = odd - even;
        if(dif == 0 || diff.find(dif) != diff.end()){
        ans = "YES";
        break;
        }
        diff[dif] = i;
    }
    cout<<ans<<"\n"; 

}
int main(){
    FIN; 
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}