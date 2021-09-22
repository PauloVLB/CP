#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1005

using namespace std;

int n;
int a[MAX], b[MAX];

int main() {_ 
    cin >> n;

    int ans = INF;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                ans = min(a[i] + b[j], ans);
            } else {
                ans = min(ans, max(a[i], b[j]));
            }
        }
    }

    cout << ans << endl;
}