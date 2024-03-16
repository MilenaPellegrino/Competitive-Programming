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
    int n, s; cin>>n>>s; 
    bool z = false, x = false, w = false; 
    vector<int> a(n); vector<int> b(n);
    fore(i, 0, n)cin>>a[i];
    fore(i, 0, n) cin>>b[i];
    if(a[0] == 0){
		cout<<"NO"<<"\n";
		return 0;
	}
    if(a[s-1] == 1){cout<<"YES"<<"\n"; return 0;}
    if(b[s-1] == 1)z= true;
    if(a[n-1] == 1) x = true;
    if(b[n-1] == 1) w = true;
    if(z && x && w){cout<<"YES"<<"\n";}else{cout<<"NO"<<"\n";}
    return 0;
}
