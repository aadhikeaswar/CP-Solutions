#include <iostream>
using namespace std;
int main() {
    int n, temp, x, sol{1};
    cin >> n >> temp;
    while(--n){
        cin >> x;
        if(x!=temp) sol++;
        temp = x;
    }
    cout << sol;
}