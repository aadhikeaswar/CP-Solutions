#include <iostream>
#include <algorithm>
using namespace std;
struct person{
    int c, p , d, t;
};
bool comp(person a, person b){
    if(a.t!=b.t) return a.t>b.t;
    else return a.c < b.c;
}
int main() {
    int n, sol{0}, start{0};
    cin >> n;
    person peoples[n];
    for(int i = 0; i < n; i++){
        cin >> peoples[i].c >> peoples[i].p >> peoples[i].d;
        peoples[i].t = peoples[i].p + peoples[i].d;
    }
    sort(peoples, peoples+n, comp);
    for(int i = 0; i < n; i++) start += peoples[i].c, sol = max(sol, peoples[i].t+start);
    cout << sol;
    return 0;
}
