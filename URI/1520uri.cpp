#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, x, y, q, lo, up;
vector<int> v;

int main() {_ 
    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> x >> y;
            for(int j = x; j <= y; j++) {
                v.push_back(j);
            }
        }
        sort(v.begin(), v.end());

        cin >> q;
        lo = lower_bound(v.begin(), v.end(), q) - v.begin();
        up = upper_bound(v.begin(), v.end(), q) - v.begin();
        
        if(v[lo] != q) cout << q << " not found" << endl;
        else cout << q << " found from " << lo << " to " << up-1 << endl;

        v.clear();
    }
    return 0;
}