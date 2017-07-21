/*************************************************************************
	> File Name: Financial_Management.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月21日 星期五 09时30分44秒
 ************************************************************************/

#include<iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    double a = 0.0,sum = 0.0;
    for(int i = 0;i<12;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout << '$'<<fixed << setprecision(2)<<sum/12<<endl;
}
