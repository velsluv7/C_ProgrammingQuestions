#include<stdio.h>

int main()
{
	int (*a[5])();  //a is an array of function pointer that takes void as parameter and int as return value
	int i;
	static int j = 4;
	static int k  = 0;
	
	for(i =0 ; i < 5; i++)
		a[i] = main;
		
	while(j)
	{
		a[j--]();
	}
	k++;
	printf("%d ",k);

}
