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

 
int main(){
    FIN; 
    string s; cin>>s;
   int cont = 0;
   int count = 0;
    fore(i, 0, SZ(s)){
		if(s[i] == s[i+1]){
			cont++;
		} else {
			count = max(cont, count);
			cont = 0;
		}
	}
	cout<<count+1;
    return 0;
}
