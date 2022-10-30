#include <iostream>
#include <set>

using namespace std;
int main() {
    int n;
    cin >> n;
    set<string> originals;
    string x;
    int sol{0}, y, mx{0};
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(originals.count(x) == 0) originals.insert(x), sol = mx < y ? i : sol, mx = max(mx, y);
    }
    cout << sol + 1 << endl;
    return 0;
}
