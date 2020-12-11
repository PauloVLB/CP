#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, d, a;
int main() {_
    cin >> n >> d >> a;

    cout << (d-a+n)%n << endl;
}