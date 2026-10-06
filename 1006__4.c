#include <stdio.h>
int main()
{
    int age;
    int license;
    printf("請輸入年齡:");
    scanf("%d",&age);
    printf("請輸入有無駕照(1有,0無):");
    scanf("%d",&license);
    if (age>=18 || license==1)
    {
       printf("可開");
    }
    else
    {
        printf("不可開");
    }
    return 0;
}