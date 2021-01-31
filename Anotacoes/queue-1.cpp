#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int n, x;
queue<string> fila;

/*
só podem ser usados 0's e 1's
*não pode conter "11" (não pode: 011 110 1111)

* os N primeiros elementos da sequência
* 1: 0
* 2: 1

* ordenadas por tamanho e desempatadas por ASCII

0, 1, 00, 01, 10, 000, 001...

0 -> 0, 1
1 -> 0 
*/

int main() {_ 
    cin >> n;
    
    fila.push("0");
    fila.push("1");

    for(int i = 0; i < n; i++) {
        string s = fila.front(); fila.pop();

        cout << s << endl;

        if(s[s.size() - 1] == '0') {
            fila.push(s+"0");
            fila.push(s+"1");
        } else {
            fila.push(s+"0");
        }
    }
}