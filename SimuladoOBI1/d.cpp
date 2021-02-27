#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string n;

int main() {_
    cin >> n;

    for(int i = 0; i < n.size(); i++) {
        if(isdigit(n[i]) || n[i] == '-') {
            cout << (char) n[i];
        } else {
            n[i] -= n[i] > 'P';
            cout << (char) ('2' + ((n[i] - 'A')/3)); 
        }
    }
    cout << '\n';
}
