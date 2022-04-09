#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    unsigned cap;
    char* arr;

};
Stack* createStack(unsigned cap){
    Stack* st = new Stack();
    st->cap = cap;
    st->top = -1;
    st->arr = new char[(st->cap * sizeof(char))];

    return st;
}
int isFull(Stack* st){
    return st->top == st->cap-1;
}
int isEmpty(Stack* st){
    return st->top == -1;
}

void push(Stack* st, char item){
    if(isFull(st)) return ;
    st->arr[++st->top] = item;
}

char pop(Stack* st){
    if(isEmpty(st)) return -1;

    return st->arr[st->top--];
}
void RevStack(char str[])
{
    
    int n = strlen(str);
    Stack* stack = createStack(n);
    for (int i = 0; i < n; i++)
        push(stack, str[i]);
    
     for (int i = 0; i < n; i++)
        str[i] = pop(stack);
}
int main(){
    char str[] = "ashutosh";
    RevStack(str);
}