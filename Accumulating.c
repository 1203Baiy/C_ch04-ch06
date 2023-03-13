#include<stdio.h>
int main()
{
	int a = 0,n = 0,sum = 0;
	scanf("%d %d",&a,&n);
    int tmp = a;
    printf("%d ",tmp);
	for(int i = 1; i < n; i++)
	{
		a = a * 10 + tmp;
        sum += a;
	    printf("+ %d ",a);
	}
        sum += tmp;
    printf("= %d",sum);
	return 0;
}