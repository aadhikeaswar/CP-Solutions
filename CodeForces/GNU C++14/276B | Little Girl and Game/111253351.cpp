#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sol{0}, freq[26];
    for(int &i : freq) i = 0;
    for(char c : s) {
        int x = c;
        freq[x-97]++;
    }
    for(int i : freq)if(i%2==1) sol++;
    if(sol<=1) cout << "First";
    else if(sol%2==0) cout << "Second";
    else cout << "First";
    return 0;
}