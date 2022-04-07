#include <iostream> 
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    while(n--) {
        int l;
        std::cin >> l;

        int hash = 0;
        for(int i = 0; i < l; i++) {
            std::string s;
            std::cin >> s;

            int tamanho = (int) s.size();

            for(int j = 0; j < tamanho; j++) {
                hash += (s[j] - 'A') + i + j;
            }

        }
        std::cout << hash << '\n';
    }
}