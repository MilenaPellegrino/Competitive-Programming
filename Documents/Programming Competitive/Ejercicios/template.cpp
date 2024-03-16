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
	int q, n; cin>>q>>n; 
	vector<int> a(n); 
	int ai; cin>>ai; a[0] = ai;
	fore(i, 1, n){
		cin>>ai; 
		a[i] = a[i-1] + ai;
	}
	fore(i, 0, q){
		int g; cin>>g; 
		auto it = lower_bound(ALL(a), g);
		if(*it == g){
			cout<<it - a.begin() + 1<<" "<<0<<"\n";
		} else {
			if(it == a.begin()) cout<<0<<" "<<g<<"\n";
			else cout<<it - a.begin()<<" "<<g-*(it-1)<<"\n";
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
