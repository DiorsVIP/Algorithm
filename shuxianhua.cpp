/*************************************************************************
	> File Name: shuxianhua.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 10时52分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
int judge(int n)
{
    int a,b,c;
    a = n/100;
    b = (n/10)%10;
    c = n%10;
    if(n==a*a*a+b*b*b+c*c*c)
    return 1;
    return 0;
}
int main(void)
{
    int m,n,flag;
    while(cin>>m>>n)
    {
        flag = 0;
        for(int i = m;i<=n;i++)
        {
            if(judge(i)==1)
            {
                flag++;
                if(flag==1)
                cout << i;
                else
                cout << ' ' << i;
            }
        }
        if(flag==0)
        cout << "no";
        cout << endl;
    }
}
