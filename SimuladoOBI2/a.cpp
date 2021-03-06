#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
int main() {_
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}