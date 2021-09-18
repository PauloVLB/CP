#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;

int main() {_   
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        char c; cin >> c;
        for(int j = 0; j < x; j++) {
            cout << c;
        }
        cout << endl;
    }
}