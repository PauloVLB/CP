#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 5000

using namespace std;

int t;
// 1 - 1
// 2 - 1 1
// 3 - 1 2
// 4 - 1 3
// 5 - 1 2 2
// 6 - 1 2 3
// 7 - 1 2 4
// 8 - 1 3 4
// 9 - 1 3 5
// 10 - 1 2 3 4
// 11 - 1 2 3 5
// 12 - 1 2 4 5
// 13 - 1 3 4 5
// 14 - 1 3 4 6
// 15 - 1 3 5 6
// 16 - 1 3 5 7
// 17 - 


int main() {_
    cin >> t;

    while(t--) {
        int s; cin >> s;
        int x = 1, tot = 1;
        int ans = 1;
        while(tot < s) {
            x += 2;
            tot += x;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
