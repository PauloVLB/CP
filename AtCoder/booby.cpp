#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005
#define vii vector<pair<int, int>>
#define fs first
#define sc second

using namespace std;

int n;
vii a;

int main() {_ 
    cin >> n;
    a = vii(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].fs;
        a[i].sc = i+1;
    }

    sort(a.rbegin(), a.rend());

    cout << a[1].sc << endl;
}