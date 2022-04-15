#include <iostream>

int* filter(int* first, int* last) {
    int* current = first;

    while(current < last) {
        if(*current > 0) {
            *first = *current;
            first++;
        }
        current++;
    }

    return first;
}

int main() {
    int a[10] = {-2, -8, 6, 7, -3, 10, 1, 0, -3, 7};

    auto p = filter(a, a+10);

    auto it = std::begin(a);

    while(it < p) {
        std::cout << *it << ' ';
        it++;
    }

    std::cout << '\n';
}