#include <stdio.h>
int main()
{
	int x = 0;
	printf("please enter the number", x);
	scanf("%d", &x);
	for (int i = 0; i <= 9; i++)
		{
			printf("\n%d*%d=%d", x, i, x * i);	 
		}
	return 0;
}