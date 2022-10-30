#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool unreadable{true};
    for(int i = 0; i < s.size(); i++){
        if(i%2==0 && isupper(s[i]) ) unreadable = false;
        if(i%2==1 && !isupper(s[i]) ) unreadable = false;
    }
    if(unreadable) cout << "Yes";
    else cout << "No";
    return 0;
}
