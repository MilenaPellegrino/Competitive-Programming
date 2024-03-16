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
    int n; cin>>n; 
    vector<int> a(n);
    fore(i, 0, n)cin>>a[i];
    fore(i, 1, n)a[i] += a[i-1];
    int m; cin>>m; 
    vector<int> q(m);
    //vector<int> res(m);
    fore(i, 0,m){
        cin>>q[i];
        int res = lower_bound(ALL(a), q[i]) - a.begin();
        pri(res + 1);
        }
    
    //fore(i, 0, n)cout<<a[i]<<" ";
    
    
    //fore(i, 0, m)cout<<res[i]<<"\n";
    
    return 0;
}