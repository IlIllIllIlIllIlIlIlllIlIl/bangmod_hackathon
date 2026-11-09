#include <cstdio> // fuck off iostream overhead

static unsigned short dp[50001];

int main() {
    int X;
    scanf("%d", &X);

    for (int i = 1; i <= X; i++) {
        dp[i] = X + 1;
    }

    for (int n = 1; n * (n + 1) / 2 <= X; n++) {
        int coin = n * (n + 1) / 2;

        for (int i = coin; i <= X; i++) {
            if (dp[i - coin] + 1 < dp[i]) {
                dp[i] = dp[i - coin] + 1;
            }
        }
    }

    printf("%hu\n", dp[X]);

    return 0;
}
