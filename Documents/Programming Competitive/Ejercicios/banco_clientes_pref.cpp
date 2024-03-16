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
	queue<string> uno; 
	stack<string> dos; 
	while(n--){
		char c; int f; string s; cin>>c>>f; 
		if(c == 'E') cin>>s;
		if(c == 'E'){
			if( f == 1) uno.push(s);
			else dos.push(s);
		} else {
			if( f == 1){
				cout<<uno.front()<<"\n";
				uno.pop();
			} else {
				cout<<dos.top()<<"\n";
				dos.pop();
			}
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
