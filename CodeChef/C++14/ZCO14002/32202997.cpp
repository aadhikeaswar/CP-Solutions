#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> timeList;
vector <int> memoize;
int minWork(int n){
    int attempt{0};
    if (n<=2) return timeList[n];
    else if(memoize[n-1]!=-1) return memoize[n-1];
    else {
        attempt+= timeList[n] + min({minWork(n-1),minWork(n-2),minWork(n-3)});
        memoize[n-1] = attempt;
        return attempt;
    }
}

int main() {
    int n;
    cin >> n;
    int input;
    for (int i = 0; i < n ; ++i) {
        cin >> input;
        timeList.push_back(input);
    }
    for (int j = 0; j < n; ++j) memoize.push_back(-1);
    timeList[n]=0;
    cout << minWork(n);
    return 0;
}
