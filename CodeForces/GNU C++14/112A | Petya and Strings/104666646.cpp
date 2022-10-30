#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    string s, s1;
    cin >> s >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s>s1) cout << 1;
    else if(s<s1) cout << -1;
    else cout << 0;
}