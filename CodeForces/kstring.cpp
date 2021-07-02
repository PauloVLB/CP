#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int k;
string s;
map<char, int> f;
set<char> l;

int main() {_
    cin >> k;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        f[s[i]]++;
        l.insert(s[i]);
    }

    for(int i = 0; i < s.size(); i++) {
        if(f[s[i]]%k != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    string r = "";

    for(char c : l) {
        for(int i = 0; i < f[c]/k; i++) {
            r += c;
        }
    }

    for(int i = 0; i < k; i++) {
        cout << r;
    }
    cout << endl;
}
