
#include<stdio.h>

#define z(x,y)	x ## y

int main()
{
    int GOODDAY;

    z(GOOD, DAY) = 7;  

    printf("\n%d\n", GOODDAY);
}
