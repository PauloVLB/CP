#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n;
vector<int> v, xau;
int main() {_
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        
        for(int j = 1; j <= n; j++) {
            v.push_back(j);
        }

        for(int j = 1; j <= n; j++) {
            for(int x : v) {
                if(x != j && find(xau.begin(), xau.end(), x) == xau.end()) {
                    cout << x << " ";
                    xau.push_back(x);
                }
            }
        }
        cout << endl;
        v.clear();
        xau.clear();
    }

    return 0;
}