#include <stdio.h>

int main() {
    int T, n, k[700][700], lead = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);

        // scan input
        for (int j = 0; j < n; j++) {
            for (size_t l = 0; l < n; l++) {
                scanf("%d", &k[j][l]);
            }
        }

        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                lead = k[i][j];
            }
        }

    }

    printf("%d\n", lead);
    return 0;
}
