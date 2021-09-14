#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string ans[10] = {"pon", "pon", "hon", "bon", "hon", "hon", "pon", "hon", "pon", "hon"};
int main() {_
    char c;
    while(cin >> c);
    cout << ans[c-'0'] << endl;
}