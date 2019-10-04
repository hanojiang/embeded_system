#include <stdio.h>

int main()
{
	int a[2][3] = {{1,2,3}, {4,5,6}};

	int(*p)[3] = a;

	printf("+++++%d\n", p[0][0]);
	printf("a:%p, a+1:%p, a+1+1:%p\n", a, a+1, a+1+1);
	printf("a[0]:%p, a[1]:%p, a[1]+1:%p\n", a[0], a[1], a[1]+1);
	
	
	int aa;
	scanf("%d", &aa);

	printf("aa=%d\n", aa);

	char bb;
	scanf("%*c%c", &bb);
	printf("bb=%c\n", bb);
	
	return 0;
}
