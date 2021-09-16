#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int>
#define pb push_back

using namespace std;

string s;

int main() {_ 
    cin >> s;

    string ans = "NO";
    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
}