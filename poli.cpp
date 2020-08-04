#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
using namespace std;

/*
    p(x) = x**5 + 2x**3 + 37
*/

i64 fexpo(int b, int e) {
    int ans = 1;
    while(e) {
        if(e&1) ans = (ans*b);
        b = (b*b);
        e >>= 1;
    }
    return ans;
}

i64 a, b, r1, r2;

i64 p(i64 x) {
    return 2 * (fexpo(x, 3)) + 4 * (fexpo(x, 2)) + 3 * x + 1;    
}

int main() {_
    cin >> a >> b;
    
    cout << "p(a) = " << p(a) << endl;
    cout << "p(b) = " << p(b) << endl;

    return 0;
}