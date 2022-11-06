#include <iostream>
typedef long long ll ;
using namespace std;

ll si[5000], e[5000], dp[5000][5000], n, s;
ll experienceGained(int i, int j){
    if(i>= n || j >= n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    else dp[i][j] = max(experienceGained(i+1,j+1), si[i]*e[j]+experienceGained(i,j+1));
    return dp[i][j];
}
int main() {
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> e[i];
    si[0] = s;
    for(auto &i : dp) for(ll &j : i) j = -1;
    for(int i = 1; i < n; i++) {
        ll lS{si[i-1]}, digSum{0};
        while(lS>0) digSum+= lS%10, lS /= 10;
        si[i] = si[i-1] + digSum*digSum*digSum;
    }
    cout << experienceGained(0,0);
    return 0;
}
