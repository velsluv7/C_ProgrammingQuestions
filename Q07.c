#include<stdio.h>

struct A
{
	union U *next;
	int data[10];
};

struct B
{
	union U *next;
	int data[5];
};

union U
{
	struct A a;
	struct B b;
};


int main()
{
	union U u1,u2,u3,u4,u5;
	union U *ptr;
	
	int i;
	
	for(i=0;i<10;i++)
		u1.a.data[i] = i;
	u1.a.next = &u2;
	
	for(i=0;i<5;i++)
		u2.b.data[i] = 10 * i;
	u2.b.next=&u3;
	
	for(i=0;i<10;i++)
		u3.a.data[i] = 100 * i;
	u3.a.next = &u4;
	
	for(i=0;i<5;i++)
		u4.b.data[i] = 1000 * i;
	u4.b.next=&u5;
	
	for(i=0;i<10;i++)
		u5.a.data[i] = 10000 * i;
	u5.a.next = NULL;
	
	
	ptr=&u1;
	i=0;
	
	while(ptr)
	{
		printf("%d ",ptr->a.data[i]);
		i++;
		ptr = ptr->a.next;
	}
	
}
