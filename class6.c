#include <stdio.h>
int main() {
    int arr[6][4];
    int r, c;
    printf("enter first group\n");
    for (r = 0; r < 6; r++) {
        for (c = 0; c < 4; c++) {
            scanf("%d", &arr[r][c]);
            
        }
         printf("\n"); 
    }
    int arr2[6][4];
    printf("enter second group\n");
    for (r= 0; r < 6; r++) {
        for (c= 0; c< 4; c++) {
            scanf("%d", &arr2[r][c]);
            
        }
         printf("\n"); 
    }
    int arr3[6][4];
       for (r= 0; r< 6; r++) {
        for (c= 0; c < 4; c++) {
           arr3[r][c]= arr[r][c]+arr2[r][c];
            
        }
    }
    printf("the first array is\n");
     for (r = 0; r < 6; r++) {
        for (c = 0; c < 4; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n"); 
    }
    printf("the second array is\n");
       for (r = 0; r< 6; r++) {
        for (c = 0; c < 4; c++) {
            printf("%d ", arr2[r][c]);
        }
        printf("\n"); 
    }
    printf("the third group is\n");
       for (r = 0; r < 6; r++) {
        for (c = 0; c < 4; c++) {
            printf("%d ", arr3[r][c]);
        }
        printf("\n"); 
    }
    return 0;
}
 
