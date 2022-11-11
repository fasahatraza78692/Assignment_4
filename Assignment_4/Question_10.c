//Write a program to print a table of 5;
#include<stdio.h>
int main()
{
	printf("Press any key to print a table of 5\n");
	getch();
	int i;
	for(i=1;i<=10;i++)
	  {
	  	printf("5x%2d = %2d\n",i,i*5);
	  }
	return 0;
}
