#include <stdio.h>

// Write a C program to check whether a given number from keyboard is Palindrome number or not.
// Verilen bir sayının klavyeden girilip girilmediğini kontrol eden bir C programı yazınız. Palindrom numarası ya da değil.

int main() {
    int ilkhali, number, reversnumber = 0, kalan;
    printf("sayi giriniz:");
    scanf("%d", &number);
    ilkhali = number;
    while (number >= 1) {
        kalan = number % 10;
        reversnumber = (reversnumber * 10) + kalan;
        number = number / 10;
    }
    if (ilkhali == reversnumber)
    {
        printf("Palindrom.");
    } else{
        printf("Palindrom degil.");
    }
    
    return 0;
}