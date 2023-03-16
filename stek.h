#pragma once
#include <iostream>

struct stack
{
    char elem;
    stack *next;
};

void vuvod(stack *t){
    stack *k = t;
    while (k != NULL){
        if (k==NULL){
            break;
        }
        std::cout << k->elem << std::endl;
        k = k->next;
    }
}

stack *create(char elo){
    stack *a = new stack;
    a->elem = elo;
    vuvod(a);
    return a;
}

stack *push(char c, stack *s)
{
    stack *p = new stack;
    p->elem = c;
    p->next = s;
    vuvod(s);
    return p;
}


char *pop(char c, stack *s)
{
    stack *p = s;
    c = s->elem;
    s = s->next;
    vuvod(s);
    delete p;
    return &c;
}


