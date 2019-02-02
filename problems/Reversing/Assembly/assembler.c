#include <stdio.h>

extern unsigned int _test (unsigned int, unsigned int);

int main(void)
{
    printf("%x\n", _test(0xc9, 0xb0));
    return 0;
}
