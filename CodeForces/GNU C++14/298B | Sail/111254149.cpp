#include <iostream>
using namespace std;
int main() {
    long long vm{0}, hm{0}, t, sx, sy, ex, ey, vmr, hmr;
    char vd, hd, x;
    bool vr{false}, hr{false};
    cin >> t >> sx >> sy >> ex >> ey;
    vmr = abs(ey-sy), hmr = abs(ex-sx);
    if(ey>sy) vd = 'N';
    else if(ey == sy) vd = 'X';
    else vd = 'S';
    if(ex>sx) hd = 'E';
    else if(ex == sx) hd = 'X';
    else hd = 'W';
    for(int i = 1; i <= t; i++){
        cin >> x;
        if(x == vd) vm++;
        if(x == hd) hm++;
        if(vm == vmr) vr = true;
        if(hm == hmr) hr = true;
        if(vr && hr) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}