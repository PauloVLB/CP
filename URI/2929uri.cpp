#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, v;
string st;

stack<int> stck;
stack<int> sml;

int main() {_
    cin >> n;
    sml.push(INT_MAX);

    for(int i = 0; i < n; i++) {
        cin >> st;
        char q = st[1];

        if((q == 'O' || q == 'I') && stck.empty()) {
            cout << "EMPTY" << endl;
            continue;
        }

        if(q == 'U') {
            cin >> v;
            stck.push(v);
            if(sml.top() >= v) sml.push(v);
            cin.ignore();
        } else if (q == 'O') {
            if(sml.top() == stck.top()) {
                stck.pop(); sml.pop(); 
            } else {
                stck.pop();
            }
        } else if (q == 'I') {
            cout << sml.top() << endl;
        }
    }

    return 0;
}