#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    int no;
    char isim[50];
    int yas;
    struct Ogrenci* next;
};

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

void enUzunIsim(struct Ogrenci *head) {
    if (head == NULL) {
        printf("Liste boş.\n");
        return;
    }
    struct Ogrenci *enUzun = head;
    while (head != NULL) {
        if (strlen(head->isim) > strlen(enUzun->isim)) {
            enUzun = head;
        }
        head = head->next;
    }
    printf("Listedeki en uzun isim: %s\n", enUzun->isim);
    printf("Uzunluk: %lu\n", strlen(enUzun->isim));
}

int main() {
    struct Ogrenci* bas = NULL;
    ekleOgrenci(&bas, 201, "Murat", 24);
    ekleOgrenci(&bas, 203, "Fatma", 25);
    ekleOgrenci(&bas, 205, "Abdurrahman", 19);
    ekleOgrenci(&bas, 207, "Ahmet", 15);

    enUzunIsim(bas);

    return 0;
}
