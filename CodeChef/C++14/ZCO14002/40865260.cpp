#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], dp[n+3];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n+3; i++) dp[i] = 0;
    for(int i = n-1; i > -1; i--) dp[i] = arr[i] + min({dp[i+1], dp[i+2], dp[i+3]});
    printf("%d", min({dp[0], dp[1], dp[2]}));
    return 0;
}
