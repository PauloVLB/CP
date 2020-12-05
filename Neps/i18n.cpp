#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string s, ans;
int n;

int main() {_
    cin >> s;

    ans += s[0];
    ans += to_string(s.size()-2);
    ans += s[s.size()-1];


    cout << ans << endl;
    return 0;
}