#include <stdio.h>
#include <math.h>

int main() {
    double a, r, nth_term;
    int N;
    
    // Input the first term, common ratio, and N
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the position of the term (N): ");
    scanf("%d", &N);
    
    // Calculate the Nth term using the formula: a * r^(N-1)
    nth_term = a * pow(r, N - 1);
    
    // Output the result
    printf("The %d-th term of the GP is: %.5lf\n", N, nth_term);
    
    return 0;
}
