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
        std::cout << k->elem << std::endl;
        k = k->next;
    }
}

stack *create(char elo){
    stack *a = new stack;
    a->elem = elo;
    a->next = NULL;
    vuvod(a);
    return a;
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
    char c = s->elem;
    stack *p = s;
    s = s->next;
    delete p;
    vuvod(s);
    return c;
}

