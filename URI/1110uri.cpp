#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;

queue<int> fila;

int main() {_
    while(cin >> n) {
        if(n == 0) break;

        for(int i = 1; i <= n; i++) fila.push(i);
        
        cout << "Discarded cards: ";
        while(fila.size() >= 2) {
            if(fila.size() == 2) cout << fila.front() << endl;
            else cout << fila.front() << ", ";
            fila.pop(); 
            int topo = fila.front(); fila.pop();
            fila.push(topo);
        }

        cout << "Remaining card: " << fila.front() << endl;
        while(!fila.empty()) fila.pop();
    }

    return 0;
}