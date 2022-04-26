#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int * binary_duplicates(int * first, int * last, int target) {
    int * not_found = last;

    while(first < last) {
        int* mid = (int*)(first) + (last - first)/2;

        if(*mid >= target) {
            last = mid;
        } else {
            first = mid+1;
        }
    }

    return (*first == target ? first+1 : not_found);
}

void print(int* first, int* last) {
    cout << "[";
    while(first < last) {
        cout << ' ' << *(first++);
    }
    cout << " ]\n";
}

int main() {
    int n, target; cin >> n >> target;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int * found = binary_duplicates(v, v+n, target);
    
    print(v, found);
}