#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define INF 0x3f3f3f3f

using namespace std;

int n;
int a[205];

int main() {_
    cin >> n;

    for(int i = 0; i < 2*n; i++) {
        cin >> a[i];
    }

    sort(a, a+(2*n));

    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    int ans = 0;
    for(int i = 1; i < 2*n - 2; i+=2) {
        ans += abs(a[i] - a[i-1]);
    }

    cout << ans << endl;
}