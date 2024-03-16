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

 
int main(){
    FIN; 
    ll n; cin>>n; 
    ll cont = 0; 
    vector<ll> a(n);
    fore(i, 0, n)cin>>a[i];
    fore(i, 0, n-1){
		if(a[i] > a[i+1]){
			cont+= a[i] - a[i+1];
			a[i+1] = a[i];
		}
	}
	pri(cont);
    return 0;
}
