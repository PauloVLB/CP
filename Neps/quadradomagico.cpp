#include <bits/stdc++.h>

using namespace std;

int dp, ds, l[3], c[3], x;
bool ans;

int main() {
	for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        	cin >> x;
            if(i == j) dp += x;
            if(i+j == 2) ds += x;
            l[i] += x;
            c[j] += x;
        }
    }

    ans = (dp == ds && ds == c[0] && c[0] == c[1] && c[1] == c[2] && c[2] == l[0] && l[0] == l[1] && l[1] == l[2]);
    cout << (ans ? "SIM" : "NAO") << endl;
}