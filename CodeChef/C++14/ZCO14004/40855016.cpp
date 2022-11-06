#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int dp[2][n+3];
    int best = 0;
    for(int i = n; i < n+3; i++)for(int j = 0; j < 2; j++) dp[j][i] = 0;
    for(int i = n-1; i > -1; i--){
        dp[0][i] = max(arr[i]+dp[1][i+1], arr[i]+dp[0][i+2]);
        dp[1][i] = max(arr[i]+dp[0][i+2], arr[i]+dp[0][i+3]);
    }
    printf("%d", max(dp[0][0], dp[0][1]));
    return 0;
}
