#include <iostream> 
#include <iomanip>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::vector<unsigned long long int> f;

    f.push_back(0);
    f.push_back(1);

    for(int i = 2; i <= 60; i++) {
        f.push_back(f[i-1] + f[i-2]);
    }

    while(t--) {
        int n;
        std::cin >> n;

        std::cout << "Fib(" << n << ") = " << f[n] << '\n';
    }
}