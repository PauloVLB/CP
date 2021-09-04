#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

int l, q;
set<int> s;
int main() {_ 
    cin >> l >> q;
    s.insert(0);
    s.insert(l);

    while(q--) {
        int c, x; cin >> c >> x;
        if(c == 1) {
            s.insert(x);
        } else {
            auto pos = s.lower_bound(x);
            cout << *pos - *(--pos) << endl;
        }
    }

}