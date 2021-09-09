#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
int k;

int main() {_ 
    cin >> s >> k;
    stack<char> p;
    int resto = s.size();
    for(char c : s) {
        while(!p.empty() && p.top() > c && ((int) p.size() + resto) > k) {
            p.pop();
        }
        resto--;
        p.push(c);
    }

    string ans = "";

    while(!p.empty()) {
        ans += p.top();
        p.pop();
    }
    reverse(ans.begin(), ans.end());

    for(int i = 0; i < k; i++) {
        cout << ans[i];
    }

    cout << endl;
}