#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, x, ans;

int main() {_
    cin >> n;
    while(n--) {
        cin >> x;
        if(x > 10) {
            ans += x-10;
        }
    }

    cout << ans << endl;
}