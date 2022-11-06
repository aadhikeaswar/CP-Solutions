#include <iostream>
#include <algorithm>
using namespace std;
inline int read(){
    int n{0}; char c;
    while((c=getchar_unlocked())<48);
    n += (c-'0');
    while((c=getchar_unlocked())>=48) n = n*10 +(c-'0');
    return n;
}
int main() {
    int n = read();
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = read();
    int dp[n][2];
    dp[0][1] = INT32_MAX, dp[0][0] = arr[0], dp[1][0] = arr[1] + arr[0], dp[1][1] = arr[1];
    for(int i = 2; i < n; i++) {
       dp[i][0] = arr[i] + min(dp[i-1][0], dp[i-2][0]);
       dp[i][1] = arr[i] + min(dp[i-1][1], dp[i-2][1]);
    }
    dp[n-2][1]  += arr[0];
    printf("%d", min({dp[n-2][1], dp[n-2][0], dp[n-1][0], dp[n-1][1]}));
    return 0;
}
