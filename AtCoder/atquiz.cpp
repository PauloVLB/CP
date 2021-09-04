#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

map<string, int> m;
int main() {_ 
    m["ABC"] = m["ARC"] = m["AHC"] = m["AGC"] =0;
    
    for(int i = 0; i < 3; i++) {
        string s; cin >> s;
        m[s]++;
    }

    for(auto [k, v] : m) {
        if(v == 0) {
            cout << k << endl;
            break;
        }
    }
}