#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int acm, n;

string renas[9] =  {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};

int main() {_

    for(int i = 0; i < 9; i++) {
        cin >> n;
        acm += n;
    }

    cout << renas[(acm-1)%9] << endl;

    return 0;
}