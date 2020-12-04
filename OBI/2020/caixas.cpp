#include <bits/stdc++.h>

using namespace std;

int a, b, c, ans = 3;

int main() {
    cin >> a >> b >> c;
    
    ans -= a < b;
    ans -= b < c; 
    ans -= (b+a) < c;

    cout << (ans == 0 ? 1 : ans) << endl;
}