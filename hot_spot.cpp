
#include <iostream>
using namespace std;

long long solve(long long size, long long x, long long y) {
    if (size == 1) {
        return 1;
    }

    long long half = size / 2;
    long long area = half * half;

    if (x < half && y < half) {
        return solve(half, y, x);
    }

    if (x < half && y >= half) {
        return area + solve(half, x, y - half);
    }

    if (x >= half && y >= half) {
        return 2 * area + solve(half, x - half, y - half);
    }

    return 3 * area + solve(half, half - 1 - y, size - 1 - x);
}

int main() {
    int N;
    long long X, Y;
    cin >> N >> X >> Y;

    long long size = 1;

    for (int i = 0; i < N; i++) {
        size = size * 2;
    }

    cout << solve(size, X, Y) << "\n";

    return 0;
}
