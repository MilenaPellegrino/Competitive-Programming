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
    int n, m; cin>>n>>m; 
    vector<int> ai(10e5, 0);
    vector<int> b(10e5, 0);
    fore(i, 0, m){
        int a; cin>>a;
        ai[a] ++;
        b[ai[a]]++;
        if(b[ai[a]] == n)cout<<"1";
        else cout<<"0";
    }
    return 0;
}