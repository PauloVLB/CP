#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long

using namespace std;

int k, a, b;

int todec(int x, int k) {
    int pot = 1;
    int ans = 0;
    while(x) {
        int curr = x%10;
        ans += curr * pot;
        pot *= k;
        x /= 10;
    }

    return ans;
}

int32_t main() {_ 
    cin >> k >> a >> b;
    cout << todec(a, k) * todec(b, k) << endl;
}