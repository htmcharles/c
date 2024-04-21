#include <stdio.h>

int main() {
    int arr[5][3][4];
    int x,y,z;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++) {
        	for(z=0;z<4;z++){
        		  scanf("%d", &arr[x][y][z]);
			}
        }
    }
    return 0;
}
