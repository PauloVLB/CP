#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, xi, ans;
stack<int> s;
int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> xi;
        if(!s.empty()) {
            if(xi == 0) {
                s.pop();
            } else {
                s.push(xi);
            }
        } else {
            s.push(xi);
        }
    }

    while(!s.empty()) {
        ans += s.top(); s.pop();
    }

    cout << ans << endl;
}