#include <iostream> 
#include <iomanip>

int main() {
    std::string s;

    while(getline(std::cin, s)) {
        bool ok = 1;

        int tamanho = 0;

        bool tem_upper = 0, tem_lower = 0, tem_num = 0, tem_especial = 0;
        for(char c : s) {
            if(c == '\n' || c == '\r') continue;
            if(isupper(c)) tem_upper = 1;
            else if(islower(c)) tem_lower = 1;
            else if(isdigit(c)) tem_num = 1;
            else tem_especial = 1;
            tamanho++;
        }
        
        bool tamanho_ruim = (tamanho < 6 || tamanho > 32);
        ok = (tem_upper && tem_lower && tem_num && !tem_especial && !tamanho_ruim);
        
        std::cout << (ok ? "Senha valida." : "Senha invalida.") << '\n';
    }
}