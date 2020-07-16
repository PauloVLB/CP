#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int, int>

using namespace std;

int n;

map<int, int> m;
map<int, int> m2;


int main() {_
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        m[v]++;
    }
    
    for(auto x : m) {
        m2[x.second] = x.first;
    }

    int last = 0;
    for(auto x : m2) {
        last = x.second;
    }
    cout << last << endl;
    return 0;
}