#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_ 
    string a, b;

    cin >> a >> b;

    if(a.size() > b.size()) {
        swap(a, b);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = 0; i < a.size(); i++) {
        int d1 = a[i] - '0';
        int d2 = b[i] - '0';
        if(d1 + d2 >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }

    cout << "Easy" << endl;
}