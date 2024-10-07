#include <stdio.h>

int main() {
    int X, total_matchsticks = 0;
    
    // Input the number of floors
    printf("Enter the number of floors (X): ");
    scanf("%d", &X);
    
    // Calculate the total matchsticks required for X floors
    for (int i = 1; i <= X; i++) {
        total_matchsticks += (i * (i + 1)) / 2;
    }
    
    // Output the total matchsticks
    printf("Total matchsticks required for %d floors: %d\n", X, total_matchsticks);
    
    return 0;
}
