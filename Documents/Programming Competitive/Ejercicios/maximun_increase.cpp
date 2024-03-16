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
    int n; cin>>n; 
    vector<int> a(n);
    int aa; cin>>aa; a[0] = aa;
    int cont = 1, res = 0;
    fore(i, 1, n){
		cin>>a[i];
		if(a[i] > a[i-1]){
			cont++;
		} else { 
			res = max(cont, res);
			cont = 1;
		}
	}
	pri(max(cont, res));
	
    return 0;
}
