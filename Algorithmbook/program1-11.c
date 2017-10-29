/*************************************************************************
	> File Name: program1-11.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月29日 星期日 15时43分52秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,n,m;
    scanf("%d%d",&n,&m);
    a = (4*n-m)/2;
    b = n - a;
    if(m % 2 == 1||a<0||b<0)//考虑各种情况
    printf("No answer\n");
    else
    printf("%d %d\n",a,b);
    return 0;
}
