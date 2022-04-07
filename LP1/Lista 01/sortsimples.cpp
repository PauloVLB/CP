#include <iostream> 
#include <algorithm>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << std::min({a,b,c}) << '\n';
    std::cout << (a+b+c) - std::min({a,b,c}) - std::max({a,b,c}) << '\n';
    std::cout << std::max({a,b,c}) << "\n\n";

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
}