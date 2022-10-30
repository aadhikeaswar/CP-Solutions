#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l{0};
    for(char i: s) if(islower(i)) l++;
    if(l>=s.size()-l) transform(s.begin(),s.end(),s.begin(),::tolower);
    else  transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s;
    return 0;
}