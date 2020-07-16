#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m;
vector<pair<int, int>> c;

int main() {_
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int acm = 0;
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            acm += x;
        }
        c.push_back({acm, i});
    }

    sort(c.begin(), c.end());

    for(int i = 0; i < 3; i++) {
        cout << c[i].second + 1 << endl;
    }

    return 0;
}