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
    char s1, s2; cin>>s1>>s2;
    int n; cin>>n; 
    bool b1 = false, b2 = false, b3 = false;
    fore(i, 0, n){
		char c1, c2; cin>>c1>>c2; 
		if(s1 == c2){b1 = true;}
		if(s2 == c1){b2 = true;}
		if(b1 == b2 && b2 == true){break;}
		if(c1 == s1 && c2 == s2){b3 = true;}
	}
	if((b1 == b2 && b2 == true )|| b3 == true){
		cout<<"YES"<<"\n"; 
	}else{
		cout<<"NO"<<"\n";
	}
    return 0;
}
