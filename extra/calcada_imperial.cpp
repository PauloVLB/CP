#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
int v[505];

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int a, b, k = 1, next, ans = 1, count = 1;

    for(int i = 0; i < n; i++) {
        a = v[i]; 
        for(int j = i+1; j < n; j++) {
            if(v[j] == a) continue;
            b = v[j];
            next = a;
            count = 2;
            for(int k = j+1; k < n; k++) {
                if(v[k] == next) {
                    next = next == a ? b : a;
                    count++;
                }
            }
            ans = max(ans, count);
        }
    }

    cout << ans << endl;
}