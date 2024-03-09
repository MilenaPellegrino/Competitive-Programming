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

ll fact(int n){
	if(n==0 || n ==1) return 1; 
	else return fact(n-1) * n;
}
void solve(){
	int n; cin>>n; 
	ll res = fact(n);
	pri(res);
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
