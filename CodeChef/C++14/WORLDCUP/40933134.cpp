#include <iostream>
typedef long long ll;
using namespace std;
ll dp[1801][301][10];
ll options[3] = {0,6,4};
const ll mod = 1000000007;
ll answer(int r, int b, int l){
    if(dp[r][b][l]!=-1) return dp[r][b][l]%mod;
    ll max {0};
    if(r==0 && b==0) max = 1;
    if(b>0){
        for(int i = 0; i < 3; i++){
            if(r-options[i]>=0) max = (max + answer(r-options[i],b-1,l))%mod;
        }
        if(l>0) max = (max + answer(r,b-1,l-1))%mod;
    }
    dp[r][b][l] = max%mod;
    return max%mod;
}
inline int read(){
    int n = 0; char c;
    while ((c=getchar_unlocked())<48);
    n += (c - '0');
    while ((c=getchar_unlocked())>=48) n = n*10 + (c - '0');
    return n;
}
int main() {
    for(int i = 0; i < 1801; i++) for(int j = 0; j < 301;j++) for(int k = 0; k < 10; k++) dp[i][j][k] = -1;
    int t = read();
    for(int i = 0; i < t; i++) {
        int r = read(), b = read(), l = read();
        if(r<=1800)printf("%lld\n", answer(r,b,l));
        else printf("0\n");
    }
    return 0;
}