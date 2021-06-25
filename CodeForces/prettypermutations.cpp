#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n, x;

int main() {_
    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> v(n+1);

        for(int i = 1; i <= n; i++) {
            v[i] = i;
        }

        for(int i = 1; i < n; i+=2) {
            swap(v[i], v[i+1]);
        }

        if(v.size()%2 == 0 && v.size() > 3) {
            swap(v[n], v[n-1]);
        }

        for(int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }

        cout << endl;
    }
}
