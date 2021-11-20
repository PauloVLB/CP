#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, k;

int main() {_ 
    cin >> n >> k;

    vector<pair<int, int>> sc;
    vector<int> caras(n+1);

    for(int i = 1; i <= n; i++) {
        int a, b, c; cin >> a >> b >> c;
        sc.push_back({a+b+c, i});
        caras[i] = a+b+c;
    }

    sort(sc.rbegin(), sc.rend());

    int ref = sc[k-1].first;
    for(int i = 1; i <= n; i++) {
        if(caras[i] + 300 >= ref) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}