#include <bits/stdc++.h>

using namespace std;

string title(string F){
    string titulo;
    int n = F.size();

    bool prox = true;
    for(int i = 0; i < n; i++) {
        if(F[i] == ' ') {
            titulo += ' ';
            prox = true;
            continue;
        }
        if(prox) {
            titulo += toupper(F[i]);
            prox = false;
        } else {
            titulo += tolower(F[i]);
        }
    }
    return titulo;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}