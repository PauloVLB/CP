#include <bits/stdc++.h>

using namespace std;
int n, m;
set<int> cj;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        cj.insert(m);
    }
    cout << cj.size() << endl;
}