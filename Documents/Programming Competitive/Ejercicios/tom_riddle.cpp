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
    int n; cin>>n ;
    set<string> s;
    fore(i, 0, n){
		string si; cin>>si; 
		if(s.find(si) != s.end()){
			cout<<"YES"<<"\n";
		} else{
			s.insert(si);
			cout<<"NO"<<"\n";
		}
		
	}
    return 0;
}
