
// achei facil
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int g, p, s, k;
int m[105][105];
int pontuacao[105];
int competidor[105];
int maior;

int main() {_
    while(cin >> g >> p && (g || p)) {
        for(int i = 1; i <= g; i++) {
            for(int j = 1; j <= p; j++) {
                cin >> m[i][j]; // colocação do competidor J na corrida I  
            }
        }

        cin >> s;

        for(int i = 1; i <= s; i++) {
            cin >> k;
            for(int j = 1; j <= k; j++) {
                cin >> pontuacao[j]; 
            }
            for(int j = 1; j <= g; j++) {
                for(int l = 1; l <= p; l++) {
                    competidor[l] += pontuacao[m[j][l]];
                    maior = max(maior, competidor[l]);
                }
            }

            // competidor[x] -> potuação do competidor x
            for(int i = 1; i <= p; i++) {
                if(competidor[i] == maior) {
                    cout << i << ' ';
                }
            }
            cout << endl;

            for(int j = 1; j <= p; j++) {
                pontuacao[j] = 0;
                competidor[j] = 0;
            }
            maior = 0;
        }

        for(int i = 1; i <= g; i++) {
            for(int j = 1; j <= p; j++) {
                m[i][j] = 0;
            }
        }
    }
}