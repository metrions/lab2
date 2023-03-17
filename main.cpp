#include <iostream>
#include "st2.h"

int main()
{
    stack *s = NULL;
    /*8s = create('5');
    s = push('a', s);*/
    s = push('a', s);
    s = push('b', s);
    s = push('c', s);
    s = push('d', s);
    vuvod(s);
    return 0;
}