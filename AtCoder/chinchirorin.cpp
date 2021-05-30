#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int a, b, c, ans;

int main() {_ 
    cin >> a >> b >> c;

    if(a == b) ans = c;
    else if(b == c) ans = a;
    else if(c == a) ans = b;
    
    cout << ans << endl;
}