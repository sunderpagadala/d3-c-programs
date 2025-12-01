#include <stdio.h>

int main() {
    int n,dist_top,dist_bottom,dist_left,dist_right,value,min_dist;
    int i,j;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            dist_top = i;
            dist_bottom = size - 1 - i;
            dist_left = j;
            dist_right = size - 1 - j;

            min_dist = dist_top;
            if (dist_bottom < min_dist) min_dist = dist_bottom;
            if (dist_left < min_dist) min_dist = dist_left;
            if (dist_right < min_dist) min_dist = dist_right;

            value = n - min_dist;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}