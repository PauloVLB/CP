#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define fs first
#define sc second
#define int long long

using namespace std;

int n;

int32_t main() {_ 
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].fs >> v[i].sc;
    }

    set<pair<int, int>> spells;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int a = v[j].fs - v[i].fs;
            int b = v[j].sc - v[i].sc;

            int g = __gcd(a, b);

            a /= g;
            b /= g;

            spells.insert({a, b});
            spells.insert({-a, -b});
        }
    }

    cout << spells.size() << endl;
}