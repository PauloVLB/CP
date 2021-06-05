#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 10000005

using namespace std;

int p, n, r, t, ans, ant;
int f[MAX];

int main() {_ 
    cin >> p >> n >> r;

    t = n;
    while(t <= p) {
        t += n*r;
        n = n*r;
        ans++;
    }

    cout << ans << endl;
}   