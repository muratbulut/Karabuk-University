#include <stdio.h>
#include <math.h>

int main(){
    int para, onluk = 0, yirmilik = 0, ellilik = 0, yuzluk = 0;
    printf("Paranizi giriniz: ");
    scanf("%d", &para);
    while(para >= 100){
        para = para - 100;
        yuzluk++;
    }
    while(para >= 50){
        para = para - 50;
        ellilik++;
    }
    while(para >= 20){
        para = para - 20;
        yirmilik++;
    }
    while(para >= 10){
        para = para - 10;
        onluk++;
    }
    printf("Paraniz: %d'tane yuzluk \n %d'tane ellilik \n %d'tane yirmilik \n %d'tane onluktan olusuyor.", yuzluk, ellilik, yirmilik, onluk);
}