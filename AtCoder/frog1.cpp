#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 100005

using namespace std;

int h[MAX], n;
vector<int> memo(MAX, -1);

int e(int n) {
    if(n == 1) return 0;
    if(n == 2) return abs(h[2] - h[1]);

    if(memo[n] != -1) return memo[n];

    return memo[n] = min(abs(h[n] - h[n-1]) + e(n-1), abs(h[n] - h[n-2]) + e(n-2));
}

int main() {_
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << e(n) << endl;
}
