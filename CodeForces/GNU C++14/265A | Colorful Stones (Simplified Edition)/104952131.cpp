#include <iostream>
using namespace std;
int main() {
    string s, s1;
    cin >> s >> s1;
    int i{0};
    for(char c : s1) if(c==s[i]) i++;
    cout << i + 1;
 
}