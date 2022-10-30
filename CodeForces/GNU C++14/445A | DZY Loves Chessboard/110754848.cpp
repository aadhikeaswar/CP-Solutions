#include <iostream>
using namespace std;
int main()
{
    int n, m, a{0}, b;
    cin >> n >> m;
    char board[n][m], bw[2] = {'B', 'W'};
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> board[i][j];
    for(auto &i : board){
        if(a%2==0) b = 0;
        else b = 1;
        for(char &j : i) {
            if(j == '.') cout << bw[b%2];
            else cout << j;
            b++;
        }
        a++;
        cout << endl;
    }
    return 0;
}