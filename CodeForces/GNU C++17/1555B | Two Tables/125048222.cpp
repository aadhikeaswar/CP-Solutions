#include <iostream>
#include <iomanip>
 
using namespace std;
int main() {
    int t, x1, x2, y1, y2, W, H, w, h;
    cin >> t;
    while (t--){
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
        if((x2 - x1) + w > W && (y2-y1) + h > H) cout << -1 << endl;
        else{
            double hs = (x2 - x1 + w > W ? INT32_MAX : (w - max(W-x2, x1)) ) , vs = y2 - y1 + h > H ? INT32_MAX : h - max(H - y2, y1);            hs = hs > 0 ? hs : 0, vs = vs > 0 ? vs : 0;
            cout << setprecision(6) << fixed << min(hs, vs) << endl;
        }
    }
    return 0;
}