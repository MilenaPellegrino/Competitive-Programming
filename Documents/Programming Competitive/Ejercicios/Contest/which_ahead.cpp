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

void solve(){
	int n; cin>>n;
	map<int, int> p;
	fore(i, 0, n){
		int pi; cin>>pi; 
		p[pi] = i+1;
	}
	int q; cin>>q; 
	fore(i, 0, q){
		int a, b; cin>>a>>b; 
		auto it = p.find(a);
		int c1 = it->snd; 
		auto it2 = p.find(b);
		int c2 = it2->snd; 
		if(c1<c2){
			cout<<it->fst<<"\n";
		} else {
			cout<<it2->fst<<"\n";
		}
	}
	
}
 
int main(){
    FIN; 
    int t = 1;
    //int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
