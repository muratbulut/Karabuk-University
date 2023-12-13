#include <stdio.h>
#include <math.h>

int main(){
    int midterm,final,sNumber;
    float average;
    printf("Ogrenci Numarasini girin: ");
    scanf("%d", &sNumber);
    printf("Vize notunu girin : ");
    scanf("%d", &midterm);
    printf("Final notunu girin : ");
    scanf("%d", &final);
    average = (midterm * 0.4) + (final * 0.6);
    printf("%d numarali ogrencinin ortalamasi : %f", sNumber, average);
    return 0; 
}
