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
    int n, q; cin>>n>>q; 
    vector< ll> p(n), s(n+1); // p = {5, 3, 1, 5, 2 } s = {0 1 3 6 11 16}
    fore(i, 0, n) cin>>p[i];
    sort(ALL(p));
    fore(i, 0, n) s[i +1] = s[i] + p[i];
	while(q--){
		int x, y; cin>>x>>y; 
		cout<<s[n-x+y] - s[n-x]<<"\n";
	}
    return 0;
}
