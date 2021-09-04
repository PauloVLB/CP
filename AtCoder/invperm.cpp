#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

int n;
int q[MAX];

int main() {_ 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        q[x] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}