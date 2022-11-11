//Write a program to print the first 10 odd natural numbers;
#include<stdio.h>
int main()
{
	printf("Press any key to print the first 10 odd natural numbers\n");
	getch();
	int i=1;
	while(i<=10)
	    {
	    	printf("%d\n",i*2-1);
	    	i++;
		}
	return 0;
}
