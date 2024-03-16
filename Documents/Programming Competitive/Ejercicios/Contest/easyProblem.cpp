#include<bits/stdc++.h>
#define pb push_bac#000000#000000#000000k
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

template<typename T>
ostream & operator<<(ostream &os, const vector<T> &v){
    os<<"[";
    fore(i, 0, (int) v.size()){
        if(i) os<<", ";
        os<<v[i];
    }
    os<<"]";
    return os;
}
 
const int N = 1e5 + 10; 
const ll INF = 1e18; 
int n;
string s; 
int a[N];
ll dp[N][5];
const string h = "hard"; 

int main(){
    FIN; 
    cin>>n; 
    DBG(n);
    char b[N]; cin>>b;
    s = b; 
    cout<<" string: "<<s<<endl;
    fore(i, 0, n)cin>>a[i];
    fore(i, 0, n)cout<<a[i]<<" "; 
    cout<<endl;
    // Initialize the dp 
    fore(i, 0, N){
		fore(j, 0, 5){
			dp[i][j] = 999; 
			}
	}
	dp[0][0] = 0;
	fore(i, 0, n){
		fore(j, 0, 5){
			cout<<dp[i][j]<<" ";
			}
		cout<<endl;
	}
	fore(i, 0, n){
		fore(j, 0, 4){
			DBG(i); DBG(j);
			dp[i + 1][j + (s[i] == h[j])] = min(dp[i + 1][j + (s[i] == h[j])], dp[i][j]);
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);
			fore(i, 0, n){
				fore(j, 0, 5){
				cout<<dp[i][j]<<" ";
			}
				cout<<endl;
			}
		}
	}
	fore(i, 0, n){
		fore(j, 0, 5){
			cout<<dp[i][j]<<" ";
			}
		cout<<endl;
	}
	ll result = INF;
	fore(j, 0, 4) {
        result = min(result, dp[n][j]);
    }
    
    cout << result << "\n";
    return 0;
}
