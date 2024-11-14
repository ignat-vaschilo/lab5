#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

int main(int argc, char *argv[]) {
    int n = stoi(argv[1]);
    string mode = argv[2];
    vector<int> result;
    if (mode == "rec") {
        result = decompose_w_rec(result, n, 0);
    } else {
        result = decompose_wout_rec(n);
    }
    cout << n << "=";
    for (int i = 0; i < result.size()-1; i++) {
        cout << "2^" << result[i] << "+";
    }
    cout << "2^" << result[result.size()-1];
}
