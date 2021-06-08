#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

string p, a;
int r;

int main() {
    cin >> p >> a;

    for(int i = 0; i < p.size(); i++) {
        for(int j = 0; j < a.size(); j++) {
            if(p[i] == a[j]) {
                r++;
                a[j] = '.';
                break;
            }
        }
    }

    if(r == a.size()) {
        cout << 'S' << endl;
    } else {
        int qa = count(a.begin(), a.end(), '*');
        if(qa >= p.size() - r) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }
}