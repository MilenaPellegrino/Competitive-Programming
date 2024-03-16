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

const int N = 40004, M = 500;
const ll MOD = 1000000007;
ll dp[N][M];

int reverse(int n){
    int r=0;
    while(n>0){
        r= r*10+n%10;
        n/=10;
    }
    return r;
}

bool palindrome(int n)
{
    return (reverse(n)==n); 
}

int main(){
    vector<int> palin;
    palin.pb(0);
    fore(i, 1, 2*N){
        if(palindrome(i)){
            palin.pb(i);
        }
    }
    fore(j, 1, M){
		dp[0][j]=1;
	}
    fore(i, 1, N){
        dp[i][0]=0;
        fore(j, 1, M){
            if(palin[j]<=i)
                dp[i][j]=(dp[i][j-1]+dp[i-palin[j]][j])%MOD;
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << dp[n][M-1] << '\n';
    }
}
