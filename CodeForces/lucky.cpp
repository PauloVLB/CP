#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

string n;

int main() {_ 
    cin >> n;

    int ql = 0;
    for(int i = 0; i < (int) n.size(); i++) {
        ql += (n[i] - '0' == 4 || n[i] - '0' == 7); 
    }
    if(ql == 0) {
        cout << "NO" << endl;
        return 0;
    }
    bool eh = true;
    while(ql) {
        if(!(ql%10 == 4 || ql%10 == 7)) {
            eh = false;
            break;
        }
        ql /= 10;
    }

    cout << (eh ? "YES" : "NO") << endl;
}