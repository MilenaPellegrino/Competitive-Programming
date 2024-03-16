#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

int findmex(vii arr){
    set<int> s(arr.begin(), arr.end());
    int mex = 0;
    while(s.count(mex)){
        mex++;
    }
    return mex;
}

void solve(){
    int n; 
    cin >> n; 
    vii a(n); 
    fore(i, 0, n) 
        cin>>a[i];
    
    int mex = findmex(a);
    if(mex == 0 || (mex == n && a[0] == 0)){
        cout << "No es posible dividir el arreglo en dos subsegmentos con el mismo MEX" << endl;
        return;
    }

    int firstSegmentMexCount = 0;
    int pos = -1;
    fore(i, 0, n){
        if(a[i] == mex){
            firstSegmentMexCount++;
        }
        if(firstSegmentMexCount * 2 == i + 1){
            pos = i;
            break;
        }
    }

    if(pos == -1 || firstSegmentMexCount * 2 != n){
        cout << "No es posible dividir el arreglo en dos subsegmentos con el mismo MEX" << endl;
    } else {
        cout << "Se puede dividir el arreglo en dos subsegmentos con el mismo MEX" << endl;
        cout << "Primer subsegmento: 1 to " << pos+1 << endl;
        cout << "Segundo subsegmento: " << pos+2 << " to " << n << endl;
    }
}

int main(){
    FIN; 
    int t; 
    cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}
