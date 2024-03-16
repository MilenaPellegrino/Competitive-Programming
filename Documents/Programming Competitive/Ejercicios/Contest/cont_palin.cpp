#include<bits/stdc++.h>
#define pb push_bac#000000#000000#000000k
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

int reverse(int n){
		int ans = 0;
		while(n>0){
			ans = ans * 10 + n % 10; 
			n /=10;
		}
		return ans; 
}
int main(){
    FIN; 
    int n; cin>>n; 
    int res = 0;
    fore(i, 0, n){
		if(i == reverse(i)){
			res ++;
		}
	}
	pri(res);
    return 0;
}
