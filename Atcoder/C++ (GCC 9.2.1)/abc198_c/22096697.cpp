#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> s1;
    bool sol{true};
    for(char c : s) s1.push_back(c);
    while(s1.back()=='0')  s1.pop_back();
    for(int i = 0; i < (s1.size()/2); i++) if(s1[i]!=s1[s1.size()-1-i]) sol = false;
    if(sol) cout << "Yes";
    else cout << "No";
}
