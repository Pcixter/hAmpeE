#include <stdio.h>

int main()
{
    int hour = 0;
    while(hour<15)
    {
        printf("在实验室学习:%d\n", hour);
        hour++;
    }
    if (hour == 15)
    {
        printf("每周学习任务完成\n");
    }
    return 0;
}
