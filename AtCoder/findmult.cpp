#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int a, b, c;

int main() {_ 
    cin >> a >> b >> c;

    int ans = -1;

    for(int i = a; i <= b; i++) {
        if(i%c == 0) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}