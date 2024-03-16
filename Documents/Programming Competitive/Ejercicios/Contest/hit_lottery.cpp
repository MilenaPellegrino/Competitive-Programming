#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN;  // 100 20 10 5 1  
    ll n; cin>>n; // 125
    ll cant = 0; 
    vector<int> a = {100, 20, 10, 5, 1};
    fore(i, 0, 5){
        int c = n / a[i];
        cant += c; 
        n -= c * a[i];
    }
    prnt(cant);
    return 0;
}