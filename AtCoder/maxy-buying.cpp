#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;

int main() {_
    cin >> n;

    if(floor(n*1.08) < 206) {
        cout << "Yay!" << endl;
    } else if(floor(n*1.08) == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
}
