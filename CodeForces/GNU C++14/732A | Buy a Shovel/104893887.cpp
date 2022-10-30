#include <iostream>
using namespace std;
int main() {
    int k, r, amount, sol{1};
    cin >> k >> r;
    amount = k;
    while (amount%10 != 0 && amount%10 !=r) amount += k, sol++;
    cout << sol;
    return 0;
}