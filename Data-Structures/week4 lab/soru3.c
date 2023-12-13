#include <stdio.h>
#include <stdlib.h>

// Öğrenci bilgilerini tutacak yapı
struct Ogrenci {
    int no;
    char isim[50];
    int yas;
    struct Ogrenci* next;
};

// Liste sonuna öğrenci ekleyen fonksiyon
void ekleOgrenci(struct Ogrenci** head_ref, int no, char isim[], int yas) {
    struct Ogrenci* new_node = (struct Ogrenci*) malloc(sizeof(struct Ogrenci));
    struct Ogrenci *last = *head_ref;
    new_node->no  = no;
    strcpy(new_node->isim, isim);
    new_node->yas = yas;
    new_node->next = NULL;
    if (*head_ref == NULL) {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

// Öğrenci listesini ekrana yazdıran ve öğrenci sayısını sayan fonksiyon
void yazdirOgrenciListesi(struct Ogrenci *node) {
    int sayac = 1;
    while (node != NULL) {
        printf("%d- %s %d %d\n", sayac, node->isim, node->yas, node->no);
        node = node->next;
        sayac++;
    }
    printf("Toplam Öğrenci: %d\n", sayac - 1);
}

int main() {
    struct Ogrenci* bas = NULL;

    ekleOgrenci(&bas, 201, "Murat", 24);
    ekleOgrenci(&bas, 203, "Fatma", 25);
    ekleOgrenci(&bas, 205, "Gunes", 16);

    yazdirOgrenciListesi(bas);

    return 0;
}
