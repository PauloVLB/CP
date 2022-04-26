#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

// int c;

int longest_row(vector<vector<int>> m, int n) {
    int longest_r = 0;
    int max_one = 0;
    for(int i = 0; i < n; i++) {
        // c++;
        if(m[0][i] != 1) break; 
        max_one = i;
    }

    for(int i = 1; i < n; i++) {
        // c++;
        if(m[i][max_one] == 0) {
            for(int j = max_one-1; j >= 0; j--) {
                // c++;
                if(m[i][j] == 1 || j == 0) {
                    max_one = j;
                    longest_r = i;
                    break;
                } 
            }
        }
    }


    return longest_r;
}

int main() {
    int n; cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    cout << longest_row(m, n) << endl;
}