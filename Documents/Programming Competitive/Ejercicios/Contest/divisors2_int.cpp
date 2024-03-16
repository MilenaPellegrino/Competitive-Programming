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
	multiset<int> d;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		d.insert(x);
	}
	
	int x = *d.rbegin();
	fore (i, 1, x+1){
		if (x % i == 0) {
			d.erase(d.find(i));
		}
	}
	
	cout << x << " " << *d.rbegin() << endl;
    return 0;
}
