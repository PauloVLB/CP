#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 105

using namespace std;

int n, m;
int a[MAX], b[MAX];

int main() {_ 
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        cin >> b[i];
        for(int j = 0; j < n; j++) {
            if(b[i] >= a[j]) ans++;
        }
    }

    cout << ans << endl;
}