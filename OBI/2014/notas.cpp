#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, x, ans = -1;
int f[105];

int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        f[x]++;
    }

    for(int i = 1; i <= 100; i++) {
        if(i > ans && f[i] >= f[ans]) {
            ans = i;
        }
    }

    cout << ans << endl;
}