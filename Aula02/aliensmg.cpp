#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
set<string> cj;
string mdna;
int main() {_
    
    while(cin >> n) {
        if (n == 0) break;

        for(int i = 0; i < n; i++) {
            cin >> mdna;
            sort(mdna.begin(), mdna.end());
            cj.insert(mdna);
        }
        
        cout << cj.size() << endl;
        cj.clear();
    }

    return 0;
}