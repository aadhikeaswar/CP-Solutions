#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    while(n > 0) count += (n % 2 == 1)? 1 : 0, n = n >> 1;
    cout << count;
    return 0;
}