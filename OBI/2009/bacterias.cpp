#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define i64 long long

using namespace std;

int n, ans;
i64 d, c;
double x = 0.0, m = 0.0;
int main() {_ 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> d >> c;
        x = c*log(d);
        if(x > m) {
            m = x;
            ans = i;
        }
    }
    cout << ans << endl;
}