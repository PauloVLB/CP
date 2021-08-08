#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int t;
string s;

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> s;
        string e = "";
        string ans = "";
        for(int i = s.size()-1; i >= 0; i--) {
            // if(s[i] == '_') break;
            e += s[i];
            if(e == "op") {
                ans = "FILIPINO";
                break;
            } else if(e == "used" || e == "usam") {
                ans = "JAPANESE";
                break;
            } else if(e == "adinm") {
                ans = "KOREAN";
                break;
            }
        }

        cout << ans << endl;
    }
}