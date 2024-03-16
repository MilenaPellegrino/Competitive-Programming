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
    vector<int> a(4); 
    fore(i, 0, 4)cin>>a[i];
    sort(ALL(a)); 
    int nmax = a[3]; 
    fore(i, 0, 3)cout<<nmax - a[i]<<" ";
    return 0;
}