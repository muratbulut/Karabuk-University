#include <stdio.h>

// Write a C program for computing factorial N (N!).
// Faktöriyel N(N!)'yi hesaplamak için bir C programı yazın.

int main() {
    int number,counter = 1, fac = 1;
    printf("Faktoriyel icin sayi giriniz: ");
    scanf("%d", &number);
    while (counter <= number)
    {
        fac = fac * counter;
        counter++;
    }
    printf("Sayinin faktoriyeli: %d", fac);
    return 0;
}