#include <stdio.h>

void store() {
    float floats[4];
    float sum = 0;
    float min_float;
    
    // Receive 4 floats from the user
    for (int i = 0; i < 4; i++) {
        printf("Enter float %d: ", i+1);
        scanf("%f", &floats[i]);
        
        // Calculate the sum
        sum += floats[i];
        
        // Find the minimum float
        if (i == 0 || floats[i] < min_float) {
            min_float = floats[i];
        }
    }
    
    // Print the sum and the minimum float
    printf("Sum: %.2f\n", sum);
    printf("Minimum float: %.2f\n", min_float);
}

int main() {
    store();
    return 0;
}
