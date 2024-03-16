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
	int n, k; cin>>n>>k; 
	map<pair<int, int>, int> mp;
	fore(i, 0, n){
		int x, y; cin>>x>>y; 
		mp[{x, y}] = 1;
	}
	fore(i, 0, k){
		int x2, y2; cin>>x2>>y2; 
		mp[{x2, y2}]++;
		if(mp[{x2, y2}] >=2) pri(0);
		else pri(1);
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
