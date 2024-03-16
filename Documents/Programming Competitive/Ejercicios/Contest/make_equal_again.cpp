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
	fore(i, 0, n) cin>>a[i]; 
	int a1 = 0; 
	int n1 = n-1; 
	while(a[a1] == a[0])a1++; 
	while(a[n1] == n1) n1--; 
	if(n==1){
		pri(0);
	}
	if(a.front() != a.back()){
		pri(min(n-a1, n1 + 1));
	}
	pri(max(0, n1 - a1 + 1));
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
