#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int s, a, b;

int sd(int x) {
    int ss = 0;
    while(x) {
        int d = x%10;
        ss += d;
        x /= 10;
    }
    return ss;
}

int main() {_ 
    cin >> s >> a >> b;

    int me = INF, ma = -1;
    for(int i = a; i <= b; i++) {
        if(sd(i) == s) {
            me = min(me, i);
            ma = max(ma, i);
        }
    }

    cout << me << endl;
    cout << ma << endl;
}