#include <iostream>
using namespace std;
inline int read(){
    int n{0}; char c;
    while((c=getchar_unlocked())<48);
    n+= (c-'0');
    while((c=getchar_unlocked())>=48) n = n * 10 + (c-'0');
    return n;
}
int main() {
    int dp[301], arr[301];
    dp[0] = 0;
    int n = read();
    for(int i = 1; i <= n; i++) {
        arr[i] = read();
        int j = i;
        dp[i] = i;
        while(j>0){
            bool pSeq = true;
            int tj = j, ti = i;
            while(!(tj>ti)){
                if(arr[tj] == arr[ti]) tj++, ti--;
                else {
                    pSeq = false;
                    break;
                }
            }
            j--;
            if(pSeq)dp[i] = min(dp[i], dp[j]+1);
        }
    }
    printf("%d", dp[n]);
    return 0;
}
