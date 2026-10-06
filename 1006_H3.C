#include <stdio.h>
int main()
{
    int a;///(成績)
    int b;///(出席率)
    printf("請輸入成績:");
    scanf("%d",&a);
    if (a>=60)
    {
        printf("請輸入出席率(%):");
        scanf("%d",&b);
        if(b>=80) 
        {
            printf("課程通過 ");
        }
        else
        {
            printf("成績不及格 ");
        }        
        
    }
    else
    {
        printf("成績不及格");
    }
    
    return 0;
}