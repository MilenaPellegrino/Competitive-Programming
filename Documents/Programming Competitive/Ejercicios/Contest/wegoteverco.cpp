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
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

string abc = "abcdefghijklmnopqrstuvwxyz";
void solve(){
	int n, k; cin>>n>>k; 
	int aux = n;
	string res; 
	while(aux > 0){
		fore(i, 0, k){
			res += abc[i];
		}
		aux--;
	}
	cout<<res<<"\n";
}
int main(){
    FIN; 
    int t; cin>>t; 
    while (t--)
	{
		solve();
	}
    return 0;
}
