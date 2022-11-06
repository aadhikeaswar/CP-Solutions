#include <iostream>
using namespace std;
int t, k, n, mod{1000000007};
long long dp3[3][1000001], dp2[1000001];
int main(){
    ios_base::sync_with_stdio(0);
    dp2[1] = 0, dp2[2] = dp2[3] = 1, dp3[0][1] = dp3[0][2] = 1, dp3[0][3] = 2, dp3[1][1] = dp3[1][2] = 0, dp3[1][3] =1, dp3[2][1] = 0, dp3[2][2] = dp3[2][3] = 1;
    for(int i = 4; i <= 1000000; i++){
        dp2[i] = (dp2[i-2] + dp2[i-3])%mod;
        dp3[0][i] = (dp3[0][i-1] + dp3[0][i-3] + 2*dp3[1][i-3])%mod;
        dp3[1][i] = (dp3[2][i-1] + dp3[1][i-3])%mod;
        dp3[2][i] = (dp3[0][i-2] + dp3[2][i-3])%mod;
    }
    cin >> t;
    while(t--){
        cin >> k >> n;
        if(k==1){
            if(n%3==0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(k==2) cout << dp2[n] << endl;
        else cout << dp3[0][n] << endl;
    }
}