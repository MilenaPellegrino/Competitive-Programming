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

int encontrar(string s){
	if(s[0] != s[1] && s[1] == s[2]){
		return 0;
	}
	char a0 = s[0];
	fore(i, 1, SZ(s)){
		if(s[i] != a0){
			return i;
		}
	}
	return -1;
}

void solve(){
	string s; cin>>s; 
	int res = encontrar(s);
	pri(res+1);
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
