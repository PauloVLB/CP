#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 105

using namespace std;

int n, a[MAX], m = -1, s[2];

int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m, a[i]);
    }

    int x = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == m) {
            x = 1;
            continue;
        }
        s[x] += a[i];
    }

    cout << s[0] << endl;
    cout << s[1] << endl;
}