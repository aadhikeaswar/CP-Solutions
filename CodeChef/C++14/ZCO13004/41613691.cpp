#include <iostream>
using namespace std;
int main() {
    int n, m , k;
    cin >> n >> m >> k;
    bool safe[n+1][m+1];
    bool pos[n+1][m+1];
    for(int i = 0; i <= n; i++) for(int j = 0; j <= m; j++) safe[i][j] = true;
    for(int i = 0; i <= n; i++) for(int j = 0; j <= m; j++) pos[i][j] = true;
    while(k--) {
        int x, y, t, f;
        cin >> x >> y >> t >> f;
        safe[x][y] = false;
        for (int i = t; i <= n + m - 2; i += f) {
            for (int j = 1; i + j <= n + m - 2; j++) {
                if (x + y + j - 2 == i + j) {
                    if (x + j <= n) safe[x + j][y] = false;
                    if (y + j <= m) safe[x][y + j] = false;
                }
                if (x + y - j - 2 == i + j) {
                    if (x - j > 0) safe[x - j][y] = false;
                    if (y - j > 0) safe[x][y - j] = false;
                }
            }
        }
    }
        for(int i = n; i > 0; i--){
            for(int j = m; j > 0; j--){
                pos[i][j] = false;
                if(safe[i][j]){
                    if(i!=n) pos[i][j] = pos[i][j] || pos[i+1][j];
                    if(j!=m) pos[i][j] = pos[i][j] || pos[i][j+1];
                    if(i==n && j == m && safe[i][j]) pos[i][j] = true;
                }
            }
        }
        if(pos[1][1]) printf("YES\n%d", n+m-2);
        else printf("NO");
   
    return 0;
}