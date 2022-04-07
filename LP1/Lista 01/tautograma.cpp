#include <iostream> 
#include <iomanip>

int main() {

    std::string frase;
    getline(std::cin, frase);

    while(frase != "*") {
        int tamanho = (int) frase.size();
        char inicio = tolower(frase[0]);

        bool ok = 1;
        for(int i = 1; i < tamanho; i++) {
            if(frase[i-1] == ' ' && tolower(frase[i]) != inicio) {
                ok = 0;
                break;
            }
        }

        std::cout << (ok ? "Y\n" : "N\n"); 

        getline(std::cin, frase);
    }
}