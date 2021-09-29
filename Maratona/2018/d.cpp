#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n;

int main() {_ 
    cin >> n;

    int ans = 0;
    while(n--) {
        int x; cin >> x;

        ans += x == 2 || x == 3;
    }

    cout << ans << endl;
}