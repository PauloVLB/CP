// OBI - 2020 - Fase 1 - Nível Sênior - Bingo

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k, u, sorteado, lido;
vector<vector<int>> c;
vector<int> linha;
bool ganhou = false;

int main() {
    cin >> n >> k >> u;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> lido;
            linha.push_back(lido); 
        }
        c.push_back(linha);
        linha.clear();
    }

    for(int i = 0; i < u; i++) {
        cin >> sorteado;
        for(int j = 0; j < n; j++) {
            auto it = find(c[j].begin(), c[j].end(), sorteado); 
            if(it != c[j].end()) {
                c[j].erase(it);
            }
            
            if(c[j].empty()) {
                ganhou = true;
                cout << j+1 << " ";
            }
        }    
        if(ganhou) break;   
    }
    cout << endl;

    return 0;
}