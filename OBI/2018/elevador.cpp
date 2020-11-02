#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a[10005], n;
char ans = 'S';

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a, a+n+1);

    for(int i = 0; i < n; i++) {
        if(a[i+1] - a[i] > 8) {
            ans = 'N';
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
