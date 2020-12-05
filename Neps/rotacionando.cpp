#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 100005

using namespace std;

int n, m, r;
int p[MAX];
int rp[MAX], ri[MAX];

int main() {_
    cin >> n >> m >> r;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
        rp[i] = p[i];

        for(int j = 0; j < p[i]; j++) {
            ri[j]++; 
        }
    }

    sort(rp, rp+n);

    if(r%2 == 0) {
        for(int i = n-1; i >= 0; i--) {
            cout << rp[i] << ' ';
        }
        cout << endl;
    } else {
        for(int i = 0; i < m; i++) {
            cout << ri[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}