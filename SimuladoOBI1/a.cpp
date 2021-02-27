#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int p, r;
char ans[3] = {'C', 'B', 'A'};

int main() {_
    cin >> p >> r;

    cout << (p == 0 ?'C' : ans[p+r]) << '\n';
}