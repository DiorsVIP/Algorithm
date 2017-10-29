/*************************************************************************
	> File Name: xiaomingA+b.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月22日 星期六 08时05分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    cin.get();
    for(int i = 1;i<=n;i++)
    {
        int a,b;
        cin >> a >> b;
        a = a%100;
        b = b%100;
        int sum = a+b;
        sum = sum%100;
        cout << sum << endl;
    }
}
