#include <stdio.h>
#include <stdlib.h>

typedef struct nume {
    int num;
    struct nume *next;
}Nume;
Nume *chushihua() {
    Nume *head = (Nume*)malloc(sizeof(Nume));
    head->num = 0;
    head->next = NULL;
}
Nume *add(Nume *head, int num) {
    Nume *temp = (Nume*)malloc(sizeof(Nume));
    temp->num = num;
    temp->next = head->next;
    head->next = temp;
}
void print(Nume *head) {
    Nume *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->num);
        temp = temp->next;
    }
}
int main(void) {
Nume *P=chushihua();
    add(P,10);
    add(P,20);
    add(P,30);
    print(P);
    return 0;
}