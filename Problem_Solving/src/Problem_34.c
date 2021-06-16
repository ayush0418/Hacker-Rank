#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int *arr;
    int size;
    int p;
};

int isFull(struct stack *ptr){
    if(ptr->top == (ptr->size)-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr){
    if(ptr->top == ptr->p){
        return 1;
    }
    return 0;
}

void enqueue(struct stack *ptr, int val){ 
    if(!isFull(ptr)){
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int dequeue(struct stack *ptr){ 
    int a = -1;
    if(!isEmpty(ptr)){
        ptr->p++;
        a = ptr->arr[ptr->p];
    }
    return a;
}

int printFront(struct stack *ptr){
    int front;
    front = ptr->arr[(ptr->p)+1];
    return front;
}

int main(){
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 100000;
    s->top = -1;
    s->p = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    int x;
    scanf("%d",&x);

    while(x--){
        int opr;
        scanf("%d",&opr);

        if(opr == 1){
            int val;
            scanf("%d" ,&val);

            enqueue(s,val);
        }
        else if(opr == 2){
            dequeue(s);
        }
        else if(opr == 3){
            int a = printFront(s);
            printf("%d\n",a);
        }

    }

    return 0;
}