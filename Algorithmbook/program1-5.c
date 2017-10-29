/*************************************************************************
	> File Name: program1-5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月29日 星期日 15时09分05秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    //const double pi = 4.0 * atan(1.0);//atan反切函数
    double r,h,s1,s2,s;
    scanf("%lf%lf",&r,&h);
    s1 = M_PI*r*r;  //M_PI并非ANSI C标准的
    s2 = 2*M_PI*r*h;
    s = s1*2.0 + s2;
    printf("Area = %3.lf\n",s);
    return 0;
}
