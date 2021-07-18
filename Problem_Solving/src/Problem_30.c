#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top){
    if (top == NULL){
        return 1;
    }
    return 0;
}

int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL){
        return 1;
    }
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

int stackTop(struct Node *ptr){
    long int new = ptr->data;
    return new;
}

int max(int num1, int num2){
    return (num1 > num2 ) ? num1 : num2;
}

int main(){
    struct Node *top = NULL;

    int n;
    scanf("%d", &n);
    int x;
    long int val;

    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        
        if (x == 1){
            scanf("%ld", &val);
            if(isEmpty(top)){
                top = push(top, val);
            }
            else{
                top = push( top, max(val, stackTop(top)) );
            }
        }
        
        if (x == 2){
            pop(&top);
        }
        
        if (x == 3){
            int y = stackTop(top);
            printf("%d\n",y);
        }
    }
    return 0;
}