#include<stdio.h>

int add(int x, int y)
{
	return x+y;
}

int subtract(int x, int y)
{
	return x-y;
}

int multiply(int x, int y)
{
	return x*y;
}


int main()
{
	int (*fnarry[3])(int,int) = {add,subtract,multiply};
	int i=0;
	printf("\n%d\n",(fnarry[i+2])(5,6));
}
