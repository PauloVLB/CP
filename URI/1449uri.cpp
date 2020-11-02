#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int m, n, t;
map<string, string> dic;
string japo, port, linha, palavraAtual;
stringstream ss;

int main() {_
    cin >> t;
    while(t--) {
        cin >> m >> n;
        cin.ignore();
        for(int i = 0; i < m; i++) {
            getline(cin, japo);
            getline(cin, port);
            dic[japo] = port;
        }

        for(int i = 0; i < n; i++) {
            getline(cin, linha);
            ss << linha;

            ss >> palavraAtual;
            if(!dic[palavraAtual].length()) cout << palavraAtual;
            else cout << dic[palavraAtual];
            
            while(ss >> palavraAtual) {
                if(!dic[palavraAtual].length()) cout << ' ' << palavraAtual;
                else cout << ' ' << dic[palavraAtual];
            }
            cout << endl;
            ss.clear();
        }
        cout << endl;

        dic.erase(dic.begin(), dic.end());
    }

    return 0;
}