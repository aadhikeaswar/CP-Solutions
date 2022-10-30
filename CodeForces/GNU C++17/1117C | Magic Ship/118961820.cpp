#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll n, sol;
    pair<ll, ll> start, end;
    cin >> start.first >> start.second >> end.first >> end.second >> n;
    pair<ll, ll> pre[n+1];
    sol = (abs(end.first-start.first) + abs(end.second-start.second))*n, pre[0] = make_pair(0,0);
    string s;
    cin >> s;
    for(int i = 1; i <= n; i++){
        if(s[i-1] == 'U') pre[i] = pre[i-1], pre[i].second++;
        else if(s[i-1] == 'D') pre[i] = pre[i-1], pre[i].second--;
        else if(s[i-1] == 'R') pre[i] = pre[i-1], pre[i].first++;
        else pre[i] = pre[i-1], pre[i].first--;
    }
    if(abs(start.first + (sol/n)*pre[n].first - end.first) + abs(start.second + (sol/n)*pre[n].second - end.second) > sol) cout << -1;
    else {
        for(ll i = sol/2; i >= 1; i /= 2) while(sol-i > 0 && ((abs(start.first + ((sol-i)/n)*pre[n].first + pre[(sol-i)%n].first - end.first) + abs(start.second + ((sol-i)/n)*pre[n].second + pre[(sol-i)%n].second - end.second)) <= sol - i)) sol -= i;
        cout << sol;
    }
    return 0;
}