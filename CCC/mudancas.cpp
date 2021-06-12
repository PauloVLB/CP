#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

string t, s;
int ans;

int main() {_ 
    cin >> t >> s;

    s += s;

    for(int i = 0; i < s.size()/2; i++) {
        string a = s.substr(i, s.size()/2);
        if(t.find(a) != std::string::npos) {
            ans = 1;
        } 
    }

    cout << (ans ? "yes" : "no") << endl;
}   