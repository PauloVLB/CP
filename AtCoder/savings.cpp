#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, i = 1, ans, s;

int main() {_
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        s += i;
        if(s >= n) {
            cout << i << endl;
            return 0;
        }
    }
}
