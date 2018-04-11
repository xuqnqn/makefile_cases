#include <stdio.h>
#include "bar.h"
#include "foo.h"

int main(int argc, char** argv)
{
    printf("I am main\n");

    bar();
    foo();

    return 0;
}
