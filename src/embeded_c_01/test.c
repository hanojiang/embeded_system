#include <stdio.h>
#include <stdlib.h>

int x = 0;
int y = 0;

int fun1()
{
	extern int p, q;
	printf("p is %d, q is %d\n", p, q);
	return 0;
}

int p = 8;
int q = 10;
int main()
{
	fun1();
	printf("x is %d, y is %d\n", x, y);


}

