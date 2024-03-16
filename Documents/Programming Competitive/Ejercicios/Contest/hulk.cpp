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
    vector<string> res;
    fore(i, 0, n-1){
        if(n%2 == 0){
            if(i % 2 == 0){
                res.pb("I hate that");
            }
            else{
                res.pb("I love that");
            };
        } else {
            if(i % 2 != 0){
                res.pb("I love that");
            }
            else{
                res.pb("I hate that");
            };
        }
    }
    if(n%2 == 0)res.pb("I love it"); 
    if(n%2 != 0)res.pb("I hate it");
    for (const string& str : res) {
        cout << str << " ";
    }
    return 0;
}