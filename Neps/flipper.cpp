#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
int a = 1, b = 2, c = 3, d = 4;
int main() {_  
    cin >> s;

    int h = 0, v = 0;
    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] == 'H') {
            swap(a, c);
            swap(b, d);
        } else {
            swap(a, b);
            swap(c, d);
        }
    }

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
}