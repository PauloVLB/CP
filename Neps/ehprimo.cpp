#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

bool ehprimo(int x) {
    int qnt = 0;
    for(int i = 1; i <= x; i++) {
        qnt += x%i == 0;
    }
    return qnt == 2;
}
int n;

int main() {_
    cin >> n;
    cout << (ehprimo(n) ? 'S' : 'N') << endl;
}