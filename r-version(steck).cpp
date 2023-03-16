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
    return a;
}

stack *push(char c, stack *s)
{
    stack *p = new stack;
    p->elem = c;
    p->next = s;
    return p;
}

char pop(stack *&s)
{
    char c = s->elem;
    stack *p = s;
    s = s->next;
    delete p;
    return c;
}

int main()
{
    stack *s = NULL;

    s = push('a', s);
    s = push('b', s);
    s = push('c', s);
    vuvod(s);
    pop(s);
    vuvod(s);
    return 0;
}
