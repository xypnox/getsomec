#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data ;
    struct node *next ;
} node, *list;

// printing
int printList(list);
int printListR(list);
int printListO(list);

int main() { // selfRef4.c
    list l=NULL, previous=NULL;
    int n, data;

    printf("Enter data, terminate by Ctrl+Z\n");
    while(scanf("%d", &data) != EOF){
        l = (list)malloc(sizeof(node));
        l->data = data;
        l->next = previous;
        previous = l; // Last data at the head, LIFO
    }

    printf("Input data are: ");
    n = printList(l);
    // n = printListR(l);
    // n = printListO(l);
    putchar('\n');
    printf("Data count: %d\n", n);
    return 0;
}


/*
    PRINTING
*/

int printList(list l){
    int count=0;
    while(l) {
        printf("%d ", l->data);
        l = l -> next;
        ++count;
    }
    return count;
}

int printListR(list l){
    // Prints list recursively
    if(l){
        printf("%d ", l->data);
        return printListR(l->next) + 1;
    }
    return 0;
}

int printListO(list l){
    if(l){
        int temp = printListO(l->next) + 1;
        printf("%d ", l->data);
        return temp;
    }
    return 0;
}
