#include <iostream>
using namespace std;
int main() {
    int h, w, x, y, sol{0};
    char grid[102][102];
    cin >> h >> w >> x >> y;
    for(auto &i : grid) for(char &j : i) j = '#';
    for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) cin >> grid[i][j];
    int i{x}, j{y};
    while (grid[i][j] != '#') sol++, i++;
    i = x;
    while (grid[i][j] != '#') sol++, i--;
    i = x;
    while (grid[i][j] != '#') sol++, j++;
    j = y;
    while (grid[i][j] != '#') sol++, j--;
    cout << sol -3;
    return 0;
}
