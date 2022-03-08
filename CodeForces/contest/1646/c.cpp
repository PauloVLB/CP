#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

bool isFactorial(int n) {
    for (int i = 1;; i++) {
	    if (n % i == 0) {
            n /= i;
        }
        else {
            break;
        }
    }

    return n == 1;
}

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int32_t main() {_ 
    for(int i = 1; i <= 1000; i++) {
        if(countSetBits(i) == 1 || isFactorial(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;        
        if(countSetBits(n) == 1 || isFactorial(n)) {
            cout << 1 << endl;
            continue;
        } else {
            
        }
    }
}