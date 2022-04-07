#include <iostream> 
#include <iomanip>

int main() {
    int x, y;
    std::cin >> x >> y;

    int menor = std::min(x, y);
    int maior = std::max(x, y);

    int soma = 0;

    menor += (1 + (menor%2 != 0));

    for(int i = menor; i < maior; i += 2) {
        soma += i;
    }

    std::cout << soma << '\n';
}