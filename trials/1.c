#include <stdio.h>
int main() {
    int a = 3, b = 7, c, d, z;
    double e;
    c = a + b / 4 * 4.0;
    d = a + b / 4.0 * 4.0;
    e = a + (double)b / 4 * 4;
    printf("%d %d %lf\n", c, d, e);
    printf("%d\n", 3 + 4 * - 5 / 2);
    printf("%d\n", z = z = 2 && 3 > 4);
    return 0;
}
