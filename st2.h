#pragma once
#include <iostream>

struct stack
{
    char elem;
    stack *next;
};

char pop(stack *&t);

int isnull(stack *t){
    if (t != NULL){
        return 1;
    }
    else{
        return 0;
    }

}

void vuvod(stack *t){
    while (isnull(t)){
        std::cout << pop(t) << std::endl;
    }
}

stack *push(char c, stack *s)
{
    stack *p = new stack;
    p->elem = c;
    p->next = s;
    vuvod(p);
    return p;
}

char pop(stack *&s)
{
    if (isnull(s)){
        char c = s->elem;
        stack *p = s;
        s = s->next;
        delete p;
        return c;}
    else{
        std::cout << "error";
        return '-';
    }
}

