#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

set<string> s, ans;
string s1;

int main() {_ 
    s.insert("H");
    s.insert("2B");
    s.insert("3B");
    s.insert("HR");

    for(int i = 0; i < 4; i++) {
        cin >> s1;
        ans.insert(s1);
    }

    cout << (s == ans ? "Yes" : "No") << endl;


}