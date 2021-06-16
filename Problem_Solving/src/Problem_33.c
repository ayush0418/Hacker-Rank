#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top){
    if (top == NULL){ return 1; }
    return 0;
}

int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL){ return 1; }
    return 0;
}

struct Node *push(struct Node *top, int x){
    if (!isFull(top)){
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
    return 0;
}

void pop(struct Node **top){
    if (!isEmpty(*top)){
        struct Node *n = *top;
        *top = (*top)->next;
        free(n);
    }
}

int peek(struct Node *top, int x){
    struct Node *n = top;
    int e = 0;;
    while(n!=NULL){
        n= n->next;
        e++;
    }
    for (int i = 0; (i < (e  -x) && top != NULL); i++){ top = top->next; }
    if (top != NULL){ return top->data; }
    else{ return -1; }
}

void StackLinkedListTraversal(struct Node *ptr){
    while (ptr != NULL){
        printf("%c ",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node *top = NULL;
    int n, opr;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &opr);

        if (opr == 1) {
            char W[1000];
            scanf("%s", &W);
            for (int i = 0; W[i] != '\0'; i++) {
                top = push(top, W[i]);
            }
        }

        else if (opr == 2){
            int k;
            scanf("%d", &k);
            for (int i = 0; i < k; i++) {
                pop(&top);
            }
        }
        
        else if (opr == 3){
            int k;
            char peek_ch;
            scanf("%d", &k);
            peek_ch = peek(top, k);
            printf("%c\n",peek_ch);
        }
    }
    return 0;
}