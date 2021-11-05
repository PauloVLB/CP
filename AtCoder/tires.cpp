#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie();
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

string s;

int main() {_ 
    cin >> s;

    if((int) s.size() == 2) {
        cout << s << endl;
    } else {
        int t = (int) s.size();
        string x = "";
        string y = "";
        for(int i = t-3; i < t; i++) {
            x += s[i];
            if(i > t-3) {
                y += s[i];
            }
        }
        if(x == "ist") cout << x << endl;
        else cout << y << endl;
    }
}