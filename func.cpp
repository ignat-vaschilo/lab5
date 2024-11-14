#include "func.h"

std::vector<int> decompose_wout_rec(int n) {
    std::vector<int> result;
    int c = 0;

    while (n > 0) {
        if (n & 1) {
            result.push_back(c);
        }
        c += 1;
        n >>= 1;
    }
    return result;
}

std::vector<int> decompose_w_rec(std::vector<int> result, int n, int c) {
    if (n == 0) {
        return result;
    }
    if (n & 1) {
        result.push_back(c);
    }
    return decompose_w_rec(result, n>>1, c+1);
}