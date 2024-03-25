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

bool ok(string &s){
	stack<char> st; 
	for(char c:s){
		if(c == '{' || c == '[' || c == '('){
			st.push(c);
		} else {
			if(st.empty()) return false; 
			if(c == ')' && st.top() != '(') return false; 
			else if(c == '}' && st.top() != '{') return false; 
			else if(c == ']' && st.top() != '[') return false; 
			st.pop();
		}
	}
	if(st.empty()) return true; 
	else return false;
}
void solve(){
	string s; cin>>s; 
	if(ok(s)) pri("SI");
	else pri("NO");
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