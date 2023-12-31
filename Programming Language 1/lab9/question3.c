#include <stdio.h>

 // Write a C program which generates even numbers between 1000 and 2000 and then prints them.
 // 1000 ile 2000 arasında çift sayılar üreten bir C programı yazın ve sonra bunları yazdırır.

int main() {
    int counter = 1000;
    while (counter <= 2000) {
        printf("%d\n", counter);
        counter = counter + 2;
    }
    return 0;
}
