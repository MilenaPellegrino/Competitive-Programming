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

string f(int numero) {
    if (1 <= numero && numero <= 78) {
        // Calcular las letras correspondientes según el valor de centenas, decenas y unidades
        char letraCentenas = 'a' + (numero / 26 / 26) % 26;
        char letraDecenas = 'a' + (numero / 26) % 26;
        char letraUnidades = 'a' + (numero % 26);

        // Concatenar las letras en orden lexicográfico
        std::string resultado = {letraCentenas, letraDecenas, letraUnidades};
        return resultado;
    } else {
        // Manejar el caso de número fuera de rango según tus necesidades
        std::cerr << "Error: Número fuera de rango." << std::endl;
        return "Error";
    }
}

void solve(){
	int n; cin>>n;
	string s = f(n);
	cout<<s<<"\n";
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
