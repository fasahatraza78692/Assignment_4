//Write a program to print squares of the first 10 natural numbers;
#include<stdio.h>
int main()
{
	printf("Press any key to print squares of the first 10 natural numbers\n");
	getch();
	int i;
	for(i=1;i<=10;i++)
	  {
	  	printf("%d ",i*i);
	  }
	return 0;
}
