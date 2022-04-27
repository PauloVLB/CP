#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int pred(int id, int x) {
    if(id == x) {
        return 0;
    } else if(id < x) {
        return -1;
    } else {
        return 1;
    }
}

int identity(vector<int> v) {
    int first = 0;
    int last = (int) v.size();

    while(first <= last) {
        int mid = first + (last - first)/2;

        int p = pred(mid, v[mid]);

        if(p == 0) {
            return mid;
        } else if(p == -1) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int result = identity(v);

    cout << result << endl;
}