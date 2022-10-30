#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<vector<char>> board(2, vector<char> (n + 2, '0'));
        for(int i = 1; i <= n; i++) cin >> board[0][i];
        for(int i = 1; i <= n; i++) cin >> board[1][i];
        int sol{0};
        for(int i = 1; i <= n; i++){
            if(board[1][i] == '0') continue;
            else if(board[0][i] == '0') sol++;
            else if(board[0][i-1] == '1') sol++, board[0][i-1] = '2';
            else if(board[0][i + 1] == '1') sol++, board[0][i+1] = '2';
        }
        cout << sol << endl;
    }
    return 0;
}