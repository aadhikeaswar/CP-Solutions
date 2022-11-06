#include <iostream>
#include <algorithm>
using namespace std;
inline int read(){
    int n = 0; char c;
    while ((c=getchar_unlocked())<48);
    n += (c - '0');
    while ((c=getchar_unlocked())>=48) n = n*10 + (c - '0');
    return n;
}
int main() {
    int n = read();
    int arr[n], dp[n+3];
    for(int i = 0; i < n; i++) arr[i] = read();
    for(int i = 0; i < n+3; i++) dp[i] = 0;
    for(int i = n-1; i > -1; i--) dp[i] = arr[i] + min({dp[i+1], dp[i+2], dp[i+3]});
    printf("%d", min({dp[0], dp[1], dp[2]}));
    return 0;
}