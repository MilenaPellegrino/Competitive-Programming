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
	vector<int> a(n); 
	bool band = false;
	fore(i, 0, n){
		cin>>a[i];
	}
	fore(i, 0, n-1){
		if(a[i] == a[i+1]){
			band = true;
		}else{
			band = false; break;
		}
	}
	if(band){
		cout<<-1<<"\n"; 
		return;
	}
	vector<int> b(n-1); 
	fore(i, 1, n){
		b[i-1] = a[i];
	}
	cout<<SZ(b)<<" "<<1<<"\n";
	fore(i, 0, SZ(b)){
		cout<<b[i]<<" ";
	} cout<<"\n";
	cout<<a[0]<<"\n";
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
		solve();
	}
    return 0;
}
