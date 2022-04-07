#include <iostream> 
#include <iomanip>

int main() {
    std::string nome;
    std::cin >> nome;

    double salario, vendas;

    std::cin >> salario >> vendas;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << salario + (0.15*vendas) << '\n'; 
}