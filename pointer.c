#include <stdio.h>
#include <string.h>

int main() {
	int b=2;
	int *pointer=&b;

    printf("變數b的值: %d\n", b);
    printf("變數b的地址: %p\n", &b);
	printf("pointer的值: %p\n", pointer);
	printf("\n");

	*pointer=100;

	printf("pointer的值: %d\n", *pointer);
    printf("變數b的值: %d\n", b);
	printf("變數pointer的地址: %p\n", &pointer);

    return 0;
}
