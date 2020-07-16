#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
vector<int> v;

bool cmp(int a, int b) {
    if (a%2 == 0 && b%2 == 0) return a < b;
    if (a%2 != 0 && b%2 != 0) return a > b;
    return a%2 == 0 && b%2 != 0;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    
    return 0;
}