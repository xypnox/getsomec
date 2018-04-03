#include <stdio.h>

#include <stdlib.h>


typedef struct node {
    int c;
    int p;
    struct node* next;
} node, *list;




list read_poly(list current){
    list head = (list) malloc(sizeof(node));

    printf("Enter the coefficient and power : ");

    scanf("%d", &(head->c));
    scanf("%d", &(head->p));

    head->next = current;

    return head;
}




void print_poly(list temp) {
    printf("f(x) = ");
    while (temp) {
        printf("%dx^%d ", temp->c, temp->p);
        temp = temp->next;
    }
    printf("\n");
}




int main(){
    list head = NULL;
    int i = 3;

    for (i = 0; i < 3; i++) {
        head = read_poly(head);
    }

    print_poly(head);

    return 0;
}
