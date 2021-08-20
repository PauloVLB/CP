#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 105

using namespace std;

int n, m;
int a[MAX], b[MAX];
set<int> ans;
int main() {_ 
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }

    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        if(a[x]) ans.insert(x);
    }

    if(ans.size() == 0) {
        cout << "*" << endl;
        return 0;
    }
    for(int x : ans) {
        cout << x << endl;
    }
}