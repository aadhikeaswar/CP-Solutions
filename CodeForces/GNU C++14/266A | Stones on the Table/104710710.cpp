#include <iostream>
using namespace std;
int main() {
    int n, sol{0};
    cin >> n;
    char c,x;
    cin >> x;
    for(int i = 1; i < n; i++){
        cin >> c;
        if(c==x) sol++;
        x = c;
    }
    cout << sol;
}