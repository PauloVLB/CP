#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
int main() {_ 
    int n; cin >> n;
    cin >> s;

    cout << (s[n-1] == 'o' ? "Yes" : "No") << endl;
}