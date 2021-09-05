#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;
int main() {//_ 
    cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;
        int x = 0;
        int mod = a%4;
        if(mod == 1) {
            x = a-1;
        } else if(mod == 2) {
            x = 1;
        } else if(mod == 3){
            x = a;
        }

        if(x == b) {
            cout << a << endl;
        } else  {
            if((x^b) == a) {
                cout << a+2 << endl;
            } else {
                cout << a+1 << endl;
            }
        }
        // a%4:
        // 0 -> 0
        // 1 -> a-1
        // 2 -> 1
        // 3 -> a
    }
}