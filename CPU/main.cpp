#include "CPU.h"

int main()
{
    struct stack_t box = {};

    stack_init (&box);

    int elem = 0;
    processor (&box, elem);

    stack_dump (&box, __FILE__, __FUNCTION__, __LINE__, 1);
    stack_delete (&box);
    return 0;
}


