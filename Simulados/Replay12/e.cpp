#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
string q = "IOI";
int n;
int main() {_ 
    cin >> n;
    cin >> s;

    string x = "";
    int id = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == q[id]) {
            id++;
            x += s[i];
            // cout << x << endl;
            if(x == q) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}