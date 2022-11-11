//Write a program to print the first 10 even natural numbers;
#include<stdio.h>
int main()
{
	int i=1;
	printf("Press any key to print first 10 even natural numbers\n");
	getch();
	while(i<=10)
	   {
	   	 printf("%d ",i*2);
	   	 i++;
	   }
	return 0;
}
