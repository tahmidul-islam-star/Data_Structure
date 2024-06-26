#include<stdio.h>
#include<stdlib.h>

struct stack
{
    unsigned size;

    int top;

    int *arra;

};
struct stack* createstack(int size)
{
    struct stack * stack=(struct stack*)malloc(sizeof(struct stack));

    stack->size=size;

    stack->top=-1;

    stack->arra=(int *)malloc(stack->size* sizeof(int));

    return stack;
};

int isFull(struct stack* ptr)
{
    if(ptr->top== ptr->size-1) return 1;

    else return 0;
}
int isEmpty(struct stack* ptr)
{
    if(ptr->top== -1) return 1;

    else return 0;
}
void push(struct stack* ptr,int value)
{
    if(isFull(ptr)) return;

    else{
           ptr-> top++;

          ptr->arra[ptr->top]=value;
    }
}
int pop(struct stack* ptr)
{
    if(isEmpty(ptr)) return INT_MIN;

    else{

        int temp=ptr->arra[ptr->top];

       ptr->top--;

        return temp;
    }
}
int peek(struct stack* ptr)
{
    if(isEmpty(ptr)) return -1;

    else{

        return ptr->arra[ptr->top];
    }
}

int main()
{
     int num;scanf("%d",&num);

     struct stack *sp= createstack(num);

      for(int i=0;i<num;i++){

      int random;scanf("%d",&random);

      push(sp,random);
    }

     for(int i=0;i<num;i++){

    printf("%d popped\n",pop(sp));

   }
  return 0;

}
