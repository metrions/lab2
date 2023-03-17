#include <iostream>
#include "st2.h"

int main()
{
    stack *s = NULL;
    /*8s = create('5');
    s = push('a', s);*/
    push('a', s);
    push('b', s);
    push('c', s);
    push('d', s);
    vuvod(s);
    vuvod(s);
    std::cout << isnull(s);
    return 0;
}