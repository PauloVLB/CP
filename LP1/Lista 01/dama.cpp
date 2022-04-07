#include <iostream> 
#include <iomanip>

int main() {
    int xa, ya, xb, yb;

    while((std::cin >> xa >> ya >> xb >> yb) && (xa || xb || ya || yb)) {
        if(xa == xb && ya == yb) std::cout << 0 << '\n';
        else if(xa == xb || ya == yb || (abs(xa - xb) == abs(ya - yb))) std::cout << 1 << '\n';
        else std::cout << 2 << '\n';
    }
}