#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, a, t, c;

int main() {
	cin >> n;
    
    while(n--) {
    	cin >> a;
        if(t >= 1000000) {
            continue;
        }
        t += a;
        c++;
    }
    
    cout << c << endl;

    return 0;
}