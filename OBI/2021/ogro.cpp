#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n;

int main() {_ 
    cin >> n;

    if(n == 0) {
        cout << "*" << endl << "*" << endl;
        return 0;
    }
    for(int i = 0; i < 5; i++) {
        if(n > 0) cout << "I"; 
        n--;
    }
    cout << endl;

    if(n <= 0) {
        cout << "*" << endl;
        return 0;
    } else {
        for(int i = 0; i < 5; i++) {
            if(n > 0) cout << "I"; 
            n--;
        }
        cout << endl;
    }
}