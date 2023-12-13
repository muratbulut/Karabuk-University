#include <stdio.h>
#include <math.h>

int main(){
    float environment, area, pi, radius;
    char option;
    pi = 3.14;
    printf("Dairenin yari cap bilgisini girin : ");
    scanf("%f", &radius);
    getchar();
    printf("Yapmak istediginiz islemi seciniz: ");
    option = getchar();
    if (option == '1'){
        environment = 2 * pi * radius;  
        printf("Dairenin cevresi: %0.2f", environment);
    } else if (option == '2'){
        area = pi * radius * radius;
        printf("Dairenin alani: %0.2f", area);
    } else {
        printf("Yanlis giris!");
    }
    return 0;
}