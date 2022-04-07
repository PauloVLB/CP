#include <iostream> 
#include <iomanip>
#include <vector>
#include <utility>
#include <algorithm>

bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    std::string s;
    getline(std::cin, s);
    
    while(1) {
        std::vector<std::pair<int, int>> v;

        int tamanho = (int) s.size();

        for(int i = 0; i < tamanho; i++) {
            if(s[i] == '\n' || s[i] < 32) continue;

            bool nao_existe = 1;
            for(auto &[frequencia, caracter] : v) {
                if(caracter == s[i]) {
                    frequencia++;
                    nao_existe = 0;
                }
            }

            if(nao_existe) {
                v.push_back({1, s[i]});
            }
        }

        std::sort(v.begin(), v.end(), cmp);

        for(auto [frequencia, caracter] : v) {
            std::cout << caracter << " " << frequencia << '\n';
        }
        if(getline(std::cin, s)) std::cout << '\n';
        else break;
    }
}