#include <stdio.h>

struct S {
    int a;
    float b;
};

union U {
    int a;
    float b;
};

int main() {
    struct S s;
    union U u;

    printf("Size of structure = %u\n", sizeof(s));
    printf("Size of union = %u\n", sizeof(u));

    return 0;
}

