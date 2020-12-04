#include <bits/stdc++.h>

using namespace std;

int t[4], ans;

int main() {
    for(int i = 0; i < 4; i++) cin >> t[i];
    sort(t, t+4);

    for(int i = 0; i < 3; i++) {
        ans += t[i]-1;
    }

    cout << ans + t[3] << endl;
}