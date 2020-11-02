#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, k, x;
vector<int> v;

int main() {_

    while((cin >> n >> m >> k) && (n || m || k)) {
        k--;
        for(int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }

        cout << v[((k - m) % n + n) % n] << endl;
        v.clear();
    }

    return 0;
}