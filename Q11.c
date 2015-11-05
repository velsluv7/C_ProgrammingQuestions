#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>0)
				continue;
			for(k=0;k<3;k++)
				if(j<1)
					printf("Hi");
		}
		printf("Hi");
	}
}
