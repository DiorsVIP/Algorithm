/*************************************************************************
> File Name: muniu.cpp
> Author: 
> Mail: 
> Created Time: 2017年07月19日 星期三 18时57分40秒
************************************************************************/

#include<iostream>
using namespace std;
int count(int n)
{
    if(n<4)
    {
        return n;
    }
    return count(n-1)+count(n-3);
}
int main()
{
    int n,sum = 4;
    int a ;
    while(cin>>n)
    {
        cout<<count(n)<<endl;
    }

}
