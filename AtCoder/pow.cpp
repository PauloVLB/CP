#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int a, b, c;
char x, y;

int main() {_
    cin >> a >> b >> c;
    
    if(c%2 == 0) {
        if(abs(a) < abs(b)) {
            cout << "<" << endl;
        } else if(abs(a) > abs(b)) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    } else {
        if(a < b) {
            cout << "<" << endl;
        } else if(a > b) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }
}