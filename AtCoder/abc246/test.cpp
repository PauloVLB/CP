#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {_ 
    set<tuple<int, int, int, int>> s;

    s.emplace(3, 3, 2, 2);
    s.emplace(3, 3, 1, 2);

    for(auto x : s) {
        cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << " " << get<3>(x);
        cout << endl;
    }
}