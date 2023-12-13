#include <stdio.h>

int main(){
    int temp, a , b;
    printf("A sayisini girin: ");
    scanf("%d", &a);
    printf("B sayisini girin: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("A sayisinin yeni degeri : %d \n", a);
    printf("B sayisinin yeni degeri : %d \n", b);
    return 0;
}