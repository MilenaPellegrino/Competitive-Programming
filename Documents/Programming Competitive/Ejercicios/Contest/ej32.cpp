#include <iostream>
#include <chrono>

typedef long long ll;
using namespace std;

// Estructura para representar un punto en 2D
struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

// Función para verificar si los puntos forman un triángulo
bool esTriangulo(const vector<Point>& puntos) {
    return puntos.size() == 3;
}

// Función para verificar si los puntos forman un cuadrado
bool esCuadrado(const vector<Point>& puntos) {
    if (puntos.size() == 4) {
        // Verificar si los lados son perpendiculares (puedes agregar más condiciones según tus necesidades)
        int side1 = (puntos[1].x - puntos[0].x) * (puntos[2].x - puntos[1].x) + (puntos[1].y - puntos[0].y) * (puntos[2].y - puntos[1].y);
        int side2 = (puntos[2].x - puntos[1].x) * (puntos[3].x - puntos[2].x) + (puntos[2].y - puntos[1].y) * (puntos[3].y - puntos[2].y);
        int side3 = (puntos[3].x - puntos[2].x) * (puntos[0].x - puntos[3].x) + (puntos[3].y - puntos[2].y) * (puntos[0].y - puntos[3].y);
        int side4 = (puntos[0].x - puntos[3].x) * (puntos[1].x - puntos[0].x) + (puntos[0].y - puntos[3].y) * (puntos[1].y - puntos[0].y);

        return (side1 == 0 && side3 == 0 && side2 == 0 && side4 == 0);
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
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
	vector<Point> puntos; 
	fore(i, 0, n){
		for(int j=0; j<s[i].size(); j++){
			if(s[i][j] == 1){
				puntos.emplace_back(i, j);
			}
		}
	}
	if (esTriangulo(puntos)) {
        cout<<"TRIANGLE"<<"\n";
    } else {
		cout<<"SQUARE"<<"\n";
	}
	
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
