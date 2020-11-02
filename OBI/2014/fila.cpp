#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, r, a;
vector<int> v, s;

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a); 
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> r;
        s.push_back(r);
    }

    for(int i = 0; i < n; i++) {
        if(find(s.begin(), s.end(), v[i]) == s.end()) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}