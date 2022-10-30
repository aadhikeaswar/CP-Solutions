#include <iostream>
using namespace std;
int main() {
    int arr[4], sol{0}, x;
    for(int i = 0; i < 4; i++ ) cin >> arr[i];
    string s;
    cin >> s;
    for(char i : s) sol += arr[(i-'0')-1];
    cout << sol;
}