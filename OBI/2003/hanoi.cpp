#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, t;

int main() {_
    while(cin >> n && n) {
        cout << "Teste " << ++t << endl;
        cout << ((1<<n)-1) << endl << endl;
    }
}