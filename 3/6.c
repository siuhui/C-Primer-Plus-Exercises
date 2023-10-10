#include <stdio.h>
 int main(void)
 {
    float quarts;
    printf("Enter the amount of water in quarts:");
    scanf("%f", &quarts);
    float grams = quarts * 950.0;
    float n = grams / 3.0e-23;
    printf("%.2f quarts of water contains about %e water molecules.", quarts, n);
    getchar();
    getchar();
    return 0;
 }