#include <stdio.h>
int factorial(int n)
{
    if(n <= 1)
		return 1;
    else
		return n* factorial(n-1);
}
int main()
{
    int n = 1;
	printf("������n:");
	scanf("%d",&n);
	printf("�׳�Ϊ��%d",factorial(n));
	return 0;
}
