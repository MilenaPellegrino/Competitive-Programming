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
	vector<pair<int, int>> a(n);
	fore(i, 0, n){
		int s, e; cin>>s>>e; 
		a[i].fst =s; a[i].snd = e; 
	}
	int w = a[0].fst -1; 
	int maxe = a[0].snd; 
	fore(i, 1, n){
		if(a[i].fst > w){
			if(a[i].snd >= maxe){
				pri(-1);
				return;
			}
		}
	}
	pri(w);
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}