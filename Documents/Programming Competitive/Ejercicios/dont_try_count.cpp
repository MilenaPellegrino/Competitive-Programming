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

bool esta(string a, string b){
	size_t pos = a.find(b);
	if(pos!= string::npos){
		return true;
	} else{
		return false;
	}
}
void solve(){
	int n, m; cin>>n>>m; 
    string x; cin>>x;
    string s; cin>>s;
    int cont = 0;
    do
	{
		if(esta(x, s)){
			break;
		}else{
			cont ++; 
			x += x;
		}
	} while (SZ(x) < SZ(s));
	pri(cont);	
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
		solve();
	}
    return 0;
}
