#include <stdio.h>
int main()
{
    int a;
    printf("請輸入身高(cm):");
    scanf("%d",&a);
    if (a>=120)
    {
        printf("可以搭乘雲霄飛車");
    }
    else
    {
        printf("身高不足，無法搭乘雲霄飛車");
    }
    
    return 0;
}