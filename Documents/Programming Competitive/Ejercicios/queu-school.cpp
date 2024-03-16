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

int main(){
    FIN;
    int n, t; cin>>n>>t;
    // 5 2 | b g g b g | g b g g b | g g b g b
    string a; cin>>a;
    string ans = a;
    while(t--){
        fore(i, 0, n-1){
            if(a[i] == 'B' && a[i+1] == 'G'){
                ans[i] = 'G'; ans[i+1] = 'B';
            }
        }
        a = ans;      
    }
    cout<<ans<<"\n";
    return 0;
}