#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 1005

using namespace std;

int t, x = 1, k;
int ans[MAX];

int main() {_ 

    for(int i = 1; i <= 1000; i++) {
        string xs = to_string(x);
        while(x%3 == 0 || xs[xs.size()-1] == '3') {
            x++;
            xs = to_string(x);
        }
        ans[i] = x;
        x++;
    }

    cin >> t;
    while(t--) {
        cin >> k;
        cout << ans[k] << endl;
    }
}