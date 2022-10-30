#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float r, x, y, d;
    cin >> r >> x >> y;
    d = sqrt(x*x + y*y);
    if(d==r) cout << 1;
    else if (d <= 2*r) cout << 2;
    else cout << ceil(d/r);
    return 0;
}
