//
// Created by 최유경 on 2023/07/03.
//
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct{
    int n;
    int top;
    int ar[100000];
}stack;

void initstack(stack *s){
    s->n = 0;
    s->top = -1;
}
void push (stack *s, int e){
    s->top++;
    s->ar[s->top] = e;
    s->n++;
}
void pop(stack *s){
    if(s->n == 0){
        printf("-1\n");
    }
    else{
        int tmp = s->ar[s->top];
        s->top--;
        s->n--;
        printf("%d\n",tmp);
    }
}
void size(stack *s){
    printf("%d\n",s->n);
}
void empty(stack *s){
    if(s->n == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
void top(stack *s){
    if (s->n ==0){
        printf("-1\n");
    }
    else{
        printf("%d\n",s->ar[s->top]);
    }

}
int main(){
    stack  *s = (stack *)malloc(sizeof(stack));
    initstack(s);
    int n,e;
    scanf("%d",&n);
    char str[100];
    for(int i = 0; i<n;i++){
        getchar();
        scanf("%s",str);
        if(strcmp(str,"push") ==0){
            scanf("%d",&e);
            push(s,e);
        }
        if(strcmp(str,"pop")==0){
            pop(s);
        }
        if(strcmp(str,"size")==0){
            size(s);
        }
        if(strcmp(str,"empty")==0){
            empty(s);
        }
        if(strcmp(str,"top")==0){
            top(s);
        }
    }
}