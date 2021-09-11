#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;


int main() {_ 
    for(int i = 0; i < 26; i++) {
        int x; cin >> x;
        cout << (char) (x + 'a' - 1);
    }
    cout << endl;
}