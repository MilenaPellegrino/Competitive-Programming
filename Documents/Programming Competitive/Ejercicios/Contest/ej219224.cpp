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

vector<vector<int>> traspuesta(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();

    vector<vector<int>> resultado(columnas, vector<int>(filas, 0));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado[j][i] = matriz[i][j];
        }
    }

    return resultado;
}

bool esIgualTraspuesta(const vector<vector<int>>& matriz) {
    vector<vector<int>> traspuestaMatriz = traspuesta(matriz);

    int filas = matriz.size();
    int columnas = matriz[0].size();

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (matriz[i][j] != traspuestaMatriz[i][j]) {
                return false;
            }
        }
    }

    return true;
}
void solve(){
	int n; cin>>n; 
	vector<vector<int>> s(n+1, vector<int>(n+1, -1));
	vector<int> nu;
	fore(i, 0, n){
		int num; cin>>num; 
		nu.pb(num);
	}
	fore(i, 0, n){
		int nums = nu[i];
		for(int j = n; j>0; --j){
			s[i][j] = nums%10;
			nums /=10;
		}
	}
	if(esIgualTraspuesta(s)){
		cout<<"SQUARE"<<"\n";
	} else {
		cout<<"TRIANGLE"<<"\n";
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
