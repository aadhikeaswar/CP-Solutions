#include <iostream>
using namespace std;
void printSeq(int n){
    if (n == 1) cout << 1 << " ";
    else{
        printSeq(n - 1);
        cout << n << " ";
        printSeq(n - 1);
    }
}
int main() {
    int n;
    string s;
    cin >> n;
    printSeq(n);
    return 0;
}
