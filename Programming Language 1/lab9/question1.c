#include <stdio.h>
// Write a C program to find the largest of three numbers A, B, and C given from keyboard.
// Verilen A, B ve C sayılarından en büyüğünü bulan bir C programı yazınız.

int main(){
    int a,b,c;
    printf("A sayisini girin: ");
    scanf("%d", &a);
    printf("B sayisini girin: ");
    scanf("%d", &b);
    printf("C sayisini girin: ");
    scanf("%d", &c);
    if ( a >= b && a >= c){
        printf("En buyuk sayi: %d", a);
    } else if ( b >= a && b >= c) {
        printf("En buyuk sayi: %d", b);
    } else {
        printf("En buyuk sayi: %d", c);
    }

    return 0 ;
}