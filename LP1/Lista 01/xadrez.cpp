#include <iostream> 
#include <iomanip>

int main() {
    int l, c;
    std::cin >> l >> c;

    std::cout << !((l+c)%2) << '\n';
}