#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, k, ans;

int main() {_
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            ans += (i*100) + j;
        }
    }
}
