#include <stdio.h>
#include <stdlib.h>

//  1- Write a function that adds all odd numbers to the beginning of the list and all even
//     numbers to the end of the list until -1 is entered from the keyboard.


// Node yapısını tanımlıyorum. Bu yapı her bir liste elemanını temsil edecek.
struct Node {
    int data; 
    struct Node* next; 
};

// ekleBas fonksiyonu, verilen listeye yeni bir düğüm ekler ve bu düğümü listenin başına koyar.
void ekleBas(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// ekleSon fonksiyonu, verilen listeye yeni bir düğüm ekler ve bu düğümü listenin sonuna koyar.
void ekleSon(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref; 
    new_node->data  = new_data;
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

// yazdirListe fonksiyonu, listenin elemanlarını ekrana yazdırır.
void yazdirListe(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Ana fonksiyon
int main() {
    struct Node* bas = NULL;
    int sayi; 
    
    printf("Sayıları giriniz: \n");
    while (1) {
        scanf("%d", &sayi);
        if (sayi == -1) // Eğer kullanıcı -1 girerse döngüyü kır.
            break;
        if (sayi % 2 == 0) // Girilen sayı çiftse listenin sonuna ekle.
            ekleSon(&bas, sayi);
        else // Girilen sayı tekse listenin başına ekle.
            ekleBas(&bas, sayi);
    }

    printf("Oluşan Liste: ");
    yazdirListe(bas); // Oluşan listeyi ekrana yazdır.

    return 0;
}
