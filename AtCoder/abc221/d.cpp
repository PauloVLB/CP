#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n;

int main() {_ 
    cin >> n;

    vector<ii> v;
    vector<int> ans(n+1, 0);

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({a+b, -1});
    }

    sort(v.begin(), v.end());

    int q = 0;
    for(int i = 0; i < (int) v.size() - 1; i++) {
        q += v[i].sc;
        ans[q] += (v[i+1].fs) - v[i].fs;
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}