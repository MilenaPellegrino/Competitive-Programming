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
    int n; cin>>n;
    if(n == 1 || n ==2){
		string s; cin>>s; cout<<s<<"\n";
		return 0;
	}
    int a =0, b = 0;
    string s1;
    cin>>s1;
    string s2; 
    fore(i, 0, n-1){
		string s; cin>>s; 
		if(s == s1)a ++; 
		else{
			b++;
			s2 = s;
		}
	}
	if(max(a, b) == a){
		cout<<s1<<"\n";
	}else{
		cout<<s2<<"\n";
	}
    return 0;
}
