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
    FIN; 
    int n; cin>>n; // n = 5 
    vector<int> sumparc(n);  //0 2 9 12 16 25
    cin>>sumparc[0];
    fore(i, 1, n){
        int a; cin>>a; 
        sumparc[i] = (sumparc[i-1] + a); 
    }
    int m; cin>>m; 
    fore(i, 0, m){
        int b; cin>>b; 
        // binary search 
        int res = lower_bound(ALL(sumparc), b) - sumparc.begin();
        prnt(res + 1);
    }
    //fore(i, 0, n)cout<<sumparc[i]<<endl;
    return 0;
}