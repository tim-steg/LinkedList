#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node *next;
} nodet;


nodet *insert(nodet *head, int number) {
    nodet *ptr = (nodet *)malloc(sizeof(nodet));
    if (ptr == NULL) {
        fprintf(stderr, "Error: Malloc unsuccessful.");
        exit(0);
    }
    ptr->num = number;
    ptr->next = head;
    return ptr;
}

void print_ll(nodet *head) {
    printf("----------\n");
    for (nodet *p = head; p != NULL; p = p->next) {
        printf("%d\n", p->num);
    }
}

int main() {
    nodet *head = NULL;
    int data;
    while(scanf("%d", &data) == 1) {
        head = insert(head, data);
    }

    print_ll(head);

    return 0;
}