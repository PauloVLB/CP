#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define INF 0x3f3f3f3f

using namespace std;

int n, c;
string s;
map<string, int> m;
vector<string> x;
set<char> l;

int tem(string t) {
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < t.size(); i++) {
        a += t[i] == 'A';
        b += t[i] == 'B';
        c += t[i] == 'C';
    }

    return (a && b && c);
}
int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c >> s;
        for(int j = 0; j < s.size(); j++) l.insert(s[j]);
        sort(s.begin(), s.end());
        
        if(s.size() != 3) {
            x.push_back(s);
        }
        if(m[s]) {
            m[s] = min(m[s], c);
        } else {
            m[s] = c;
        }
    }

    if(l.size() < 3) {
        cout << -1 << endl;
        return 0;
    }

    int ans = INF;
    if(m["ABC"]) ans = min(ans, m["ABC"]);
    if(m["A"] && m["B"] && m["C"]) ans = min(ans, (m["A"] + m["B"] + m["C"]));

    for(int i = 0; i < x.size(); i++) {
        for(int j = i+1; j < x.size(); j++) {
            string t = x[i] + x[j];
            if(tem(t)) {
                ans = min(ans, m[x[i]] + m[x[j]]);
            }
        }
    }
    cout << ans << endl;
}