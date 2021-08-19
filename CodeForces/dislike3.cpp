#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 1005

using namespace std;

int t, k, x = 1;
int ans[MAX];


int main() {_ 
    for(int i = 1; i <= 1000; i++) {
        string xs = to_string(x);
        while(x%3 == 0 || xs[xs.size()-1] == '3') {
            xs = to_string(++x);
        }
        ans[i] = x++;
    }

    cin >> t;

    while(t--) {
        cin >> k;
        cout << ans[k] << endl;
    }
}