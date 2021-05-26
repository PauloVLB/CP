#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

string s;
stack<char> p;

int main() {_ 
    cin >> s;

    for(char c : s) {
        if(!p.empty() && p.top() == c) {
            p.pop();
        } else {
            p.push(c);
        }
    }

    string ans = "";
    while(!p.empty()) {
        ans += p.top();
        p.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}