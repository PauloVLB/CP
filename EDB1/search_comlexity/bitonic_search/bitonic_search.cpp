#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int * maximum(int * first, int * last) {
    int maior = *first;

    while(first <= last) {
        int* mid = (int*)(first) + (last - first)/2;

        if(*mid > maior) {
            maior = *mid;
            first = mid;
        } else {
            last = mid - 1;
        }
    }

    return first+1;
}


int p(int a, int b) {
    if(a < b) return 1;
    else if(a > b) return -1;
    else return 0;
}

int * binary_search(int * first, int * last, int target, bool is_inc) {
    int * not_found = last;

    while(first <= last) {
        int * mid = (int*) (first) + (last - first)/2;

        int pred = p(*mid, target) * (is_inc ? 1 : -1);

        if(pred == 0) {
            return mid;
        } else if(pred == 1) {
            first = mid+1;
        } else {
            last = mid-1;
        }
    }

    return not_found;
}

bool bitonic_search(int * v, int n, int target) {
    int* max = maximum(v, v+n);
    int* result_inc = binary_search(v, max, target, 1);
    int* result_dec = binary_search(max, v+n, target, 0);

    return (result_inc != max || result_dec != v+n);
}

// void print(int* first, int* last) {
//     cout << "[";
//     while(first < last) {
//         cout << ' ' << *(first++);
//     }
//     cout << " ]\n";
// }

int main() {
    int n, target; cin >> n >> target;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << bitonic_search(v, n, target) << endl;
}