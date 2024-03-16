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

int f(vector<int> a, int tam){
	int p = 0; 
	fore(i, 0, tam){
		p += a[i];
	}
	return p / tam + (p % tam != 0);
}
int main(){
    FIN; 
    int n, k; cin>>n>>k; 
    vector<int> a;
    int cont = 0;
    fore(i, 0, n)cin>>a[i];
	while(f(a, n)<k){
		a.pb(10); cont++;	
	}
    pri(cont);
    return 0;
}
