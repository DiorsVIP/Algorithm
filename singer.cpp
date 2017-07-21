/*************************************************************************
	> File Name: singer.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 17时11分50秒
 ************************************************************************/

#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double sum = 0.0,score,max = 0.0,min = 100.0;
    while(cin>>n)
    {
        for(int i = 0;i<n;i++)
        {
            cin>>score;
            if(max<=score)
            max = score;
            if(min>=score)
            min = score;
            sum+=score;
        }
        cout << sum <<endl;
        cout<<fixed << setprecision(2)<<(sum-max-min)/(n-2)<<endl;
        sum = 0.0;
        max = 0.0;
        min = 100.0;
    }
}
