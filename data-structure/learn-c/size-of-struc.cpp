#include <stdio.h>

typedef struct
{
    int width, height;
} TwoInt;

int main()
{
    printf("sizeof int %ld\n", sizeof(int));
    printf("sizeof TwoInt %ld\n", sizeof(TwoInt));

    puts("\n+++++++++++++++++++++");
    int int_array[5];
    int *p = int_array;
    printf("address p: %p\n", p);
    printf("address p+2: %p\n", p + 2);
    printf("address int_array[2] %p\n", &int_array[2]);
    printf("address offset %li\n", &int_array[2] - p);

    puts("\n+++++++++++++++++++++");
    TwoInt twoint_array[5];
    TwoInt *p2 = twoint_array;
    printf("address p: %p\n", p2);
    printf("address p+2: %p\n", p2 + 2);
    printf("address int_array[2] %p\n", &twoint_array[2]);
    printf("address offset %li\n", p2 + 2 - p2);
}