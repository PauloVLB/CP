#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, k, xi, yi;
int r[100005]; 

int main() {_ 
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> xi >> yi;
        r[i] = xi%yi;
    }
    sort(r, r+n);

    cout << r[k-1] << endl;
}