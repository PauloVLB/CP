#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, x, ant, s, m = -1;

int main() {_
	cin >> n >> ant;
    for(int i = 1; i < n; i++) {
    	cin >> x;
        if(ant == x) {
        	s++;
            m = max(s, m);
        } else s = 0;
        ant = x;
    }
    cout << m+1 << endl;
}
