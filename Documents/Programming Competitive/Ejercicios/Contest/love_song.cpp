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

int ca(char c){
    return c - 'a' + 1;
}

int main(){
    FIN; 

    ll n, q; 
    cin >> n >> q; 

    string s; 
    cin >> s;

    vector<ll> prefixSum(n + 1, 0); // Inicializar vector para sumas acumulativas
    fore(i, 1, n + 1) {
        prefixSum[i] = prefixSum[i - 1] + ca(s[i - 1]); // Calcular suma acumulativa de posiciones en el alfabeto
    }

    fore(i, 0, q){
        ll l, r; 
        cin >> l >> r; 

        ll result = prefixSum[r] - prefixSum[l - 1]; // Restar las sumas acumulativas para obtener la suma en el rango
        pri(result);
    }

    return 0;
}