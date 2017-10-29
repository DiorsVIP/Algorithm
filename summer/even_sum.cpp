/*************************************************************************
> File Name: even_sum.cpp
> Author: 
> Mail: 
> Created Time: 2017年07月18日 星期二 17时41分38秒
************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n,m,i,a,b = 1;
    double sum = 0;
    while(cin>>n>>m)
    {
        a = n%m;
        for(i = 1;i<=n-a;i+=m)
        {
            b = i;
            for(int j = 1;j<=m;j++)
            {

                sum+=b*2;
                b++;
            }
            if(i+m>n-a&&a==0)
            cout << sum/m<<endl;
            else
            cout<<sum/m<<' ';
            sum = 0;
        }
        sum = 0;
        for(int k = 0;k<a;k++)
        {

            sum+=i++*2;
        }
        if(a!=0)
        cout<<sum/a<<endl;
        sum = 0;
    }
}
