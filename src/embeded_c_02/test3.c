#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "2019-09-12";
	printf("before write, a is %s", a);
	scanf("%s", a);
//	printf("before write, a is %s", a);
	printf("after write, a is %s", a);
	printf("\n length of string is %lu\n", strlen(a));
	
	int b[10];

	memset(b, 1, sizeof(b));
	for(int i=0;i<10;i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}
	return 0;
}
