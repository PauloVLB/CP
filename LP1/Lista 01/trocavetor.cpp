#include <iostream> 
#include <iomanip>
#include <vector>

int main() {
    int n[20];
    for(int i = 0; i < 20; i++) {
        std::cin >> n[i];
    }

    for(int i = 0; i < 10; i++) {
        std::swap(n[i], n[19-i]);
    }

    for(int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << n[i] << '\n';
    }
}