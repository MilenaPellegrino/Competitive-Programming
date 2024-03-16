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

void solve(){
	int n; cin>>n; 
	int e2 =0, e3 = 0; 
	while(n % 2==0){
		n/=2; 
		e2 ++;
	}
	while (n % 3 == 0) {
		n /= 3;
		e3++;
	}
	if (n==1 && e2<= e3)
	{
		pri(2*e3 - e2);
	} else
	{
		pri(-1);
	}
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
		solve();
	} 

    return 0;
}
