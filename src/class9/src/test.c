#include <stdio.h>
#include "test.h"

int a = 100;
void test_fun()
{
	printf("print from %s", __FILE__);
	printf("print from %d", a);
}
