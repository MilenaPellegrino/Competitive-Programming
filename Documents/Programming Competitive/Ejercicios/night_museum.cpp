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
    string s; cin>>s; 
    vector<int> snum(SZ(s)); 
    int count = 0; 
    snum[0] = 1;
    fore(i, 0, SZ(s)){
		snum[i + 1] = s[i] - 'a' + 1;
	}
	fore(i, 0, SZ(s)){
		int dif = abs(snum[i] - snum[i+1]);
		count += min(dif, 26 - dif);
	}
	pri(count);
    
    return 0;
}
