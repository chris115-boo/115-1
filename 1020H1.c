#include <stdio.h>
int main()
{
    int num;
    printf("請輸密碼（輸入-1退出)");
    scanf("%d",&num);
    while(num !=1234 && num !=-1)
    {
        printf("密碼錯誤，請重新輸入（輸入-1退出):");
        scanf("%d",&num);
    }
    if(num==1234)
    {
        printf("登入成功\n");
    }
    else
    {
        printf("已退出程式");
    }
    return 0;
}