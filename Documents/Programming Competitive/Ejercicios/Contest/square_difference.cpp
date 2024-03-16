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
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

bool esPrimo(ll num) {
    if (num <= 1) {
        return false;
    }
    for (ll i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;  
        }
    }
    return true;  
}
void solve(){
	ll a, b; cin>>a>>b; 
	//ll res = power(a,2) - power(b, 2);
	if((a-b) !=1)cout<<"NO"<<"\n";
	else{
		ll res = a + b;
		bool r = esPrimo(res);
		if(r) cout<<"YES"<<"\n"; 
		else cout<<"NO"<<"\n";
	}
}
 
int main(){
    FIN; 
    int t; cin>>t; 
    while (t--)
	{
		solve();
	}
    return 0;
}
