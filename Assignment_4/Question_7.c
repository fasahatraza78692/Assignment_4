//Write a program to print the first 10 even natural numbers in reverse order;
#include<stdio.h>
int main()
{
	int i=10;
	printf("Press any key to print first 10 even natural numbers in reverse order\n");
	getch();
	while(i>=1)
	   {
	   	 printf("%d ",i*2);
	   	 i--;
	   }
	return 0;
}
