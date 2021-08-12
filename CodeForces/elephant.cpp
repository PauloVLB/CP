#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int x;

int main() {_ 
    cin >> x;

    cout << (x%5 != 0 ? (x/5)+1 : x/5) << endl;
}