    // EUCLID IN MANHATTAN
// Consider that the ith point is located at (xi , yi). We want to find the
// number of pairs(i, j) such that the Euclidean distance between the points
// i and j is equal to the Manhattan distance between the same two points,
// i.e. Euclidean distance(i, j) = Manhattan distance(i, j).

#include <stdio.h>

int main() {
    int coords[100][2], N, pairs=0;

    scanf("%i", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%i %i", &coords[i][0], &coords[i][1]);
    }

    for (size_t i = 0; i < N; i++) {
        for (size_t j = i+1; j < N; j++) {
            if (coords[i][0]==coords[j][0]||coords[i][1]==coords[j][1]) {
                pairs++;
            }
        }
    }

    printf("%d", pairs);
    return 0;
}
