#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i{0}, n = s.size();
    while(s[i]!='.' && i < n)  cout << s[i++];
    return 0;
}
