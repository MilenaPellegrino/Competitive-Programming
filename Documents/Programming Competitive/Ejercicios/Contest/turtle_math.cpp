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
	int sum = 0; 
	vector<int> t(n);
	fore(i, 0, n){
		int a; cin>>a; 
		t[i] = a;
		sum+=a;
		
	}
	if(sum%3 == 0){
		pri(0); return;
	}
	fore(i, 0, n){
			if((sum - t[i]) % 3 == 0){
				pri(1); 
				return;
			}
	}
	if((sum+1) % 3 ==0) pri(1);
	else if ((sum+2) % 3 ==0) pri(2);
	
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
