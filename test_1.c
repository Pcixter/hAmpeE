#include <stdio.h>

/*int main()
{
    int hour = 0;
    while(hour<15)
    {
        printf("��ʵ����ѧϰ:%d\n", hour);
        hour++;
    }
    if (hour == 15)
    {
        printf("ÿ��ѧϰ�������\n");
    }
    return 0;
}*/
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
		
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	int sum = Add(num1,num2);
	printf("%d\n",sum);
	return 0;
 } 


