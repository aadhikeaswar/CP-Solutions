#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, sol{0}, x, y;
    cin >> n;
    vector <int> area(100001, 500);
    while(n--) {
        cin >> x >> y;
        area[x] = min(y, area[x]);
    }
    for(int i = 1; i < 501; i++){
        int max_len{0}, len{0};
        for(int j = 1; j < 100000; j++) len = (area[j] >= i) ?  len + 1 : 0, max_len = max(len, max_len);
        sol = max(sol, i * (max_len + 1) );
    }
    cout << sol;
    return 0;
}
