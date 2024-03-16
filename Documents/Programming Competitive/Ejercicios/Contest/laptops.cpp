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
    ll n; cin>>n; 
    vector<pair<ll, ll>> l(n); 
    fore(i, 0, n)cin>>l[i].fst>>l[i].snd;
    sort(ALL(l));
    //fore(i, 0, n)cout<<l[i].fst<<" "<<l[i].snd<<endl;
    fore(j, 0, n-1)
    {
        if(l[j].fst<l[j+1].fst && l[j].snd>l[j+1].snd)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    
    return 0;
}