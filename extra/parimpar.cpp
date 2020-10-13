#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int p, d1, d2, ans;

int main() {_
	cin >> p >> d1 >> d2;
    ans = (d1+d2)%2==0;
    cout << (p == 0 ? !ans : ans) << endl;
}