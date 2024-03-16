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
    string s; 
    bool res = true; 
    vector<bool> r(26, false);
    fore(i, 0, n){
			char c; cin>>c; 
			c = tolower(c);
			r[c - 'a' + 1] = true;
	}
	fore(i, 1, 27){
			if(r[i] == false){
				res = false; 
				break; 
			}
	}
	if (res)
	{
		cout<<"YES";
	} else{cout<<"NO";}
    return 0;
}
