#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m;
char c;

int main() {_
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> c;

            if(c == '.'){
                if((i+j)%2 == 0) {
                    cout << 'B';
                } else {
                    cout << 'W';
                }
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
}
