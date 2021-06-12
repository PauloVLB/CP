#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 10005

using namespace std;

int n;
double ans, h[MAX], w[MAX];

int main() {_ 
    cin >> n;

    for(int i = 0; i <= n; i++) {
        cin >> h[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }

    for(int i = 0; i < n; i++) {
        ans += ((h[i] + h[i+1])*w[i])/2;
    }

    cout << fixed << setprecision(1) << ans << endl;
}