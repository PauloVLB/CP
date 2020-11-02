#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
set<string> compras;
stringstream ss;
string linha, item;

int main() {_
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {        
        getline(cin, linha);
        ss << linha;
        while(ss >> item) {
            compras.insert(item);
        }
        ss.clear();
        
        for(string x : compras) {
            if (x != *compras.rbegin()) cout << x << " ";
            else cout << x << endl;
        }

        compras.clear();
    }

    return 0;
}