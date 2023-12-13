#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 2- Add 100 randomly generated numbers to the list, write the c code that sorts all the
//    numbers entered from largest to smallest and prints them on the screen.

struct Node {
    int data;
    struct Node* next;
};

// Liste sonuna eleman ekleyen fonksiyon
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

// Listeyi ekrana yazdıran fonksiyon
void yazdirListe(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Listeyi büyükten küçüğe sıralayan fonksiyon
void siralaListe(struct Node *head) {
    int degisti, temp;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    if (head == NULL) return;

    do {
        degisti = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data < ptr1->next->data) { 
                temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                degisti = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (degisti);
}

int main() {
    struct Node* bas = NULL;
    int i, rastgeleSayi;

    // Rastgele sayı üretme için seed ayarlıyoruz
    srand(time(0));

    // 100 tane rastgele sayı üreterek listeye ekliyoruz
    for (i = 0; i < 100; i++) {
        rastgeleSayi = rand() % 1000; // 0 ile 999 arasında rastgele sayı
        ekleSon(&bas, rastgeleSayi);
    }

    printf("Rastgele Sayılar:\n");
    yazdirListe(bas);

    // Listeyi sıralıyoruz
    siralaListe(bas);

    printf("\n\nSıralı Liste (Büyükten Küçüğe):\n");
    yazdirListe(bas);

    return 0;
}
