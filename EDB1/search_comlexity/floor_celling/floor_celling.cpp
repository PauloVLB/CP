#include <iostream>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::pair;

int bound(int * first, int * last, int target, bool floor) {
    while(first < last) {
        int* mid = (int*)(first) + (last - first)/2;

        int pred = (*mid >= target);
        
        if(pred) {
            last = mid;
        } else {
            first = mid + 1;
        }
    }

    if(floor && *first != target) {
        first--;
    }

    return *first;
}

pair<int, int> floor_celling(int * first, int * last, int target) {
    return {bound(first, last, target, 1), bound(first, last, target, 0)};
}

int main() {
    int n, target; cin >> n >> target;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto result = floor_celling(v, v+n, target);

    cout << result.first << " " << result.second << endl;
}