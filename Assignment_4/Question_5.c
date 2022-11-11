//Write a program to print the first 10 odd natural numbers in reverse order;
#include<stdio.h>
int main()
{
	printf("Press any key to print the first 10 odd natural numbers in reverse order\n");
	getch();
	int i=10;
	while(i>=1)
	    {
	    	printf("%d\n",i*2-1);
	    	i--;
		}
	return 0;
}
