#include <iostream>
#include "st2.h"

int main()
{
    stack *s = NULL;
    s = create('5');
    s = push('a', s);
    s = push('b', s);
    s = push('c', s);
    return 0;
}