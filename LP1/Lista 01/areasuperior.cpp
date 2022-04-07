#include <iostream> 
#include <iomanip>

int main() {
    char op;

    std::cin >> op;

    double soma = 0;
    int qnt = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            double v;
            std::cin >> v;

            if(i+j < 11 && i < j) {
                soma += v; 
                qnt++;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(1);
    if(op == 'S') {
        std::cout << soma << '\n';
    } else {
        std::cout << soma/(qnt) << '\n';
    }
}