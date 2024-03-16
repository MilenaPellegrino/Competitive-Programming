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
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

vector<int> fact(int num) {
    vector<int> factores;
    for (int i = 2; i * i <= num; ++i) {
        while (num % i == 0) {
            factores.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        factores.push_back(num);
    }
    return factores;
}

bool verif(const vector<int>& arr) {
    unordered_set<int> factoresComunes;

    for (int num : arr) {
        vector<int> factores = fact(num);

        // Verifica si hay factores comunes con otros elementos
        unordered_set<int> nuevosFactores(factores.begin(), factores.end());
        for (int factor : nuevosFactores) {
            if (factoresComunes.count(factor) > 0) {
                return false;  // Factor común encontrado
            }
        }

        // Agrega los nuevos factores al conjunto de factores comunes
        factoresComunes.insert(nuevosFactores.begin(), nuevosFactores.end());
    }

    return true;  // No hay factores comunes entre los elementos
}
void solve(){
	int n; cin>>n; 
	vector<int> a(n);
	fore(i, 0, n) cin>>a[i];
	if(verif(a)){
		cout<<"YES"<<"\n";
	} else {
		cout<<"NO"<<"\n";
	}
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
