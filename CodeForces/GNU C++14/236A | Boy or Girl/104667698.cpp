#include <iostream>
#include <set>
 
using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> s1;
    for(char i: s) s1.insert(i);
    if(s1.size()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}