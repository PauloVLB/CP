#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int s, m, l;

int main() {_ 
    cin >> s >> m >> l;

    cout << (1*s + 2*m + 3*l >= 10 ? "happy" : "sad") << endl;
}   