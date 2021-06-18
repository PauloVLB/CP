#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

char j;
int g;
int ans[] = {-1, 3, 3, 2, 2, 1, 1};
int main() {_ 
    for(int i = 0; i < 6; i++) {
        cin >> j;
        g += j == 'V';        
    }

    if(g >= 5) {
        cout << 1 << endl;
    } else if(g >= 3) { 
        cout << 2 << endl;
    } else if(g >= 1) {
        cout << 3 << endl;
    } else {
        cout << -1 << endl;
    }
}