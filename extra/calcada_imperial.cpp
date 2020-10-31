#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
int v[505];
int a, b, nex, ans = 1, c = 1;

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        a = v[i]; 
        for(int j = i+1; j < n; j++) {
            if(v[j] == a) continue;
            b = v[j];
            nex = a;
            c = 2;
            for(int k = j+1; k < n; k++) {
                if(v[k] == nex) {
                    nex = nex == a ? b : a;
                    c++;
                }
            }
            ans = max(ans, c);
        }
    }

    cout << ans << endl;
}