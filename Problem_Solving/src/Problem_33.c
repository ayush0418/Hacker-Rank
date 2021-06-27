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
    struct Node *operations = NULL;          
    struct Node *delete = NULL;                      
    struct Node *insert = NULL;
    struct Node *deleteElements = NULL; 
    int n, opr;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &opr);

        if(opr == 1 || opr ==2){
            operations = push(operations,opr);
        }

        if (opr == 1) {
            char q[1000];
            scanf("%s", &q);
            int r = strlen(q);
            insert = push(insert,r);
            for (int i = 0; q[i] != '\0'; i++) {
                top = push(top, q[i]);
            }
        }

        else if (opr == 2){
            int p;
            scanf("%d", &p);
            delete = push(delete,p);
            for (int i = 0; i < p; i++){
                deleteElements = push(deleteElements,top->data);
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
        
        else if(opr == 4){
            int lastOpr = operations->data;
            pop(&operations);

            if(lastOpr == 1){ 
                int lastQ = insert->data;
                pop(&insert);  
                for(int i=0;i<lastQ;i++){
                    pop(&top);
                }
            }

            else if(lastOpr == 2){ 
                int lastP = delete->data;
                pop(&delete);
                for (int i = 0; i < lastP; i++) {
                    top = push(top,deleteElements->data);
                    pop(&deleteElements);
                }
            }
        }
    }
    return 0;
}