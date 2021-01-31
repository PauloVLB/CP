#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int n, x;

stack<int> pilha;

int main() {_ 
    cin >> n;

    while(n--) {
        cin >> x;
        pilha.push(x);
    }
    
    while(!pilha.empty()) {
        int e = pilha.top(); pilha.pop();
        cout << e << endl;
    }
}