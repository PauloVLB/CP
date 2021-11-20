#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int s, t, x;

int main() {_ 
    cin >> s >> t >> x;

    string ans = "No";

    if(s < t) {
        if(s <= x && x < t) {
            ans = "Yes";
        }
    } else {
        if(x >= s || x < t) {
            ans = "Yes";
        }
    }

    cout << ans << endl;
}