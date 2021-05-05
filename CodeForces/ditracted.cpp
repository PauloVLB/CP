#include <bits/stdc++.h>
 
using namespace std;

map<char, int> m;
int t, n;
bool s = true;
char c, last = ' ';

int main() {
    cin >> t;

    while(t--) {
        cin >> n;
        s = true;
        last = ' ';
        for(int i = 0; i < n; i++) {
            cin >> c;
            if(m[c] && last != c) {
                s = false;
            }
            m[c]++;
            last = c;
        }
        cout << (s ? "YES" : "NO") << endl;
        m.clear();
    }

}