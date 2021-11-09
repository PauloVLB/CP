#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_ 
    int n; cin >> n;

    set<vector<int>> s;
    for(int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> v;
        while(l--) {
            int x; cin >> x;
            v.push_back(x);
        }
        s.insert(v);
    }

    cout << s.size() << endl;
}