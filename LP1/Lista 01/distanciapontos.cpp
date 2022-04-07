#include <iostream> 
#include <iomanip>
#include <math.h>

int main() {
    double xa, ya, xb, yb;

    std::cin >> xa >> ya >> xb >> yb;


    double dist = (xb - xa)*(xb - xa) + (yb - ya)*(yb - ya);
    dist = std::sqrt(dist);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << dist << '\n';
}