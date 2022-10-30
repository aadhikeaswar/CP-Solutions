#include <iostream>
using namespace std;
int main() {
    int n{0},a,b;
    cin >> a >> b;
    while(a<=b) a*=3, b*=2, n++;
    cout << n;
}