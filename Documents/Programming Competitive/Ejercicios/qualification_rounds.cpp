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
    int n, k; cin>>n>>k;
    vector<int> a(n); 
    fore(i, 0, n){
		fore(j, 0, k){
			int ai; cin>>ai; 
			a[j] += ai;
		}
	}
	fore(i, 0, n){
		if(a[i]>=n){
			cout<<"NO"<<"\n"; return 0;
		}
	}
	cout<<"YES"<<"\n";
    return 0;
}
