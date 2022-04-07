#include <iostream> 
#include <iomanip>
#include <map>

int main() {
    int n;
    std::cin >> n;

    std::map<char, int> qnt_leds = {
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},
        {'0', 6}
    };

    while(n--) {
        std::string num;
        std::cin >> num;

        int soma = 0;
        for(char c : num) {
            soma += qnt_leds[c];
        }

        std::cout << soma << " leds\n";
    }
}