/*************************************************************************
	> File Name: program1-9.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月29日 星期日 15时38分35秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n",a,b);
    return 0;
}
