#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

const int MOD = 1e9+7;

using namespace std;

int n;
vector<int> memo(1e6 + 5, -1);

int c(int n) {
    if(n == 0) return 1;
    if(memo[n] != -1) return memo[n]; 
    int ans = 0;
    for(int i = n-1; i >= max(n-6, 0); i--) {
        ans += c(i);
        ans = ans%MOD;
    }
    return memo[n] = ans;
}

int main() {_ 
    cin >> n;

    cout << c(n) << endl;
}