#include <iostream> 
#include <iomanip>
#include <math.h>

int main() {
    int dinheiro;
    std::cin >> dinheiro;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    std::cout << dinheiro << '\n';

    for(int i = 0; i < 7; i++) {
        std::cout << dinheiro/notas[i] << " nota(s) de R$ " << notas[i] << ",00\n";
        dinheiro %= notas[i];
    }
}