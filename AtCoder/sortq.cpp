#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

int q;

int main() {_ 
    cin >> q;

    queue<int> f;
    multiset<int> m;
    
    while(q--) {
        int op; cin >> op;
        if(op == 1) { 
            int x; cin >> x;
            f.push(x);
        } else if(op == 2) { 
            if(!m.empty()) {
                cout << *m.begin() << endl;
                m.erase(m.begin());
            } else {
                cout << f.front() << endl;
                f.pop();
            }
        } else { 
            while(!f.empty()) {
                m.insert(f.front());
                f.pop();
            }
        }
    }
}