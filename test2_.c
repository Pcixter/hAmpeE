#include <stdio.h>

int main()
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
}
