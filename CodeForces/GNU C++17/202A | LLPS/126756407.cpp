#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char max = s[0];
    int count{0};
    for(char c: s) {
        if(max == c) count++;
        else if(c > max) count = 1, max = c;
    }
    for(int i = 0; i < count; i++) cout << max;
    return 0;
}