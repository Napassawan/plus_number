#include<stdio.h>
int a, b, c;
int main()
{
	printf("Enter the number : ");
	scanf_s("%d %d", &a, &b);
	c = a + b;
	printf("Answer = %d", c);
}