#include <stdio.h>
#include <math.h>
typedef unsigned char byte;
typedef unsigned int word;
int a = 0;
void fun1()
{
	printf("global a =  %d", a);
	printf("print from %s", __FUNCTION__);
	//printf("global b =  %d", b);
}

int b = 10;

void fun2();
int main()
{

	fun2();
	printf("global b =  %d\n", b);
	word val32 = 0x12345678;
	byte val8 = *((byte*) (&val32));
	printf("val8 is %x", val8);
	float aa = sqrt(9.0);
	printf("sqrt of 9.0 is %f", aa);
	return 0;
}
