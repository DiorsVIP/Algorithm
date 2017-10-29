/*************************************************************************
	> File Name: laohanburongyi.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月21日 星期五 10时07分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n;
    int num;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin>>num;
        int x = 3,y = 0;
        for(int j = 0 ;j<num;j++)
        {
            y = (x-1)*2;
            x = y;
        }
        cout << y <<endl;
    }
}

