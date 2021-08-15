#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n, x;
int main() {_

    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> cop = v;
        sort(cop.begin(), cop.end());

        for(int i = 0; i < n; i++) {
            if(v[i] != cop[1]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
