#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top){
    if(top == NULL){
        return 1;
    }
    return 0; 
}

int isFull(struct Node *top){
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    }
    return 0; 
}

struct Node* push(struct Node *top, int x){
    if(!isFull(top)){
        struct Node *n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
    return 0;
}

void pop(struct Node** top){
    if(!isEmpty(*top)){
        struct Node *n = *top;
        *top = (*top)->next;
        free(n);
    }
}

int match(char a, char b){
    if((a =='{' && b =='}') || (a =='(' && b ==')') || (a =='[' && b ==']')){ 
        return 1; 
    }
    else { 
        return 0; 
    }  
}

int Multiple_Parenthesis_Match(char * exp){
    struct Node *top = NULL;
    char popped_ch;

    for (int i = 0; exp[i]!='\0'; i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            top = push(top, exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            if(isEmpty(top)){ return 0; }
            
            popped_ch = top->data;
            pop(&top);
            
            if(!match(popped_ch, exp[i])){ return 0; }
        }
    }
    if(isEmpty(top)){ return 1; }
    else{ return 0; }
}


int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){      
        char  exp[100000]; 
        scanf("%s",exp); 
        
        if(Multiple_Parenthesis_Match(exp)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}