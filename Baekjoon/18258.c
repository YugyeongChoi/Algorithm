#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int n;

typedef struct queue{
    int n;
    int front;
    int rear;
    int ar[2000000];
}queue;

void initqueue(queue *q){
    q->n = 0;
    q->front = -1;
    q->rear = -1;

}

void push(queue *q, int m){
    q->n++;
    q->rear++;
    q->ar[(q->rear)%n] = m; 
}

void pop(queue *q){
    if(q->n == 0){
        printf("-1\n");
    }
    else{
       q->n--;
       q->front++;
        int tmp = q->ar[(q->front)%n];
        printf("%d\n",tmp);     
    }
}

void size(queue *q){
    printf("%d\n",q->n);
}

void empty(queue *q){
    if(q->n == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
void front(queue *q){
    if(q->n == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",q->ar[(q->front)%n +1 ]);
    }
}
void back(queue *q){
    if(q->n == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",q->ar[(q->rear)%n]);
    }
}


int main(){
    queue *q = (queue*)malloc(sizeof(queue));
    initqueue(q);
    int m;
    char str[100];
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        getchar();
        scanf("%s",str);
        if(strcmp("push",str) == 0){
           scanf("%d",&m);
           push(q,m); 
        }
        if(strcmp("front",str) == 0){
           front(q); 
        } 
        if(strcmp("back",str) == 0){
           back(q); 
        }
        if(strcmp("pop",str) == 0){
           pop(q); 
        }
        if(strcmp("size",str) == 0){
           size(q); 
        }
        if(strcmp("empty",str) == 0){
           empty(q); 
        }
                                               
    }
}