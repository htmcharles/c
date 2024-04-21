#include <stdio.h>

int main() {
    int arr[5][3];
    int r, c;
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &arr[r][c]);
        }
    }
    return 0;
}
