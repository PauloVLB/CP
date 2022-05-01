#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

void ss(int n) {
    if(n == 1) {
        cout << 1 << " ";
        return;
    }

    ss(n-1);
    cout << n << " ";
    ss(n-1);
}

int main() {_ 
    int n; cin >> n;

    ss(n);
    cout << endl;
}