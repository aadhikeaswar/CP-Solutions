#include <iostream>
#include <algorithm>
using namespace std;
int arr[200000];
int n;
int dp[200000][3] = {0,0,0};
int mm(int i, int j){
    if(i>=n) {
        return 0;
    }
    if(j<1){
        if(dp[i][j]!=0) return dp[i][j];
        dp[i][j] = arr[i] + max(mm(i+1,j+1), mm(i+2,0));
        return dp[i][j];
    }
    else{
        if(dp[i][j]!=0) return dp[i][j];
        dp[i][j] = arr[i] + max(mm(i+2,0), mm(i+3,0));
        return dp[i][j];
    }
}
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", max(mm(0,0),mm(1,0)));
    return 0;
}