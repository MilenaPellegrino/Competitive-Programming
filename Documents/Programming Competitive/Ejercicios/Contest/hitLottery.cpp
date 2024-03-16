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
    int count = 0; 
    while(n>=100){count ++; n-=100;}
    while(n>=20){count ++; n-=20;}
    while(n>=10){count ++; n-=10;}
    while(n>=5){count ++; n-=5;}
    while(n>=1){count ++; n-=1;}
    cout<<count<<"\n";
    
    return 0;
}