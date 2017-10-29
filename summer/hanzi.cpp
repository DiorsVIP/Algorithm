/*************************************************************************
> File Name: hanzi.cpp
> Author: 
> Mail: 
> Created Time: 2017年07月19日 星期三 22时44分29秒
************************************************************************/

#include<iostream>
#include <string.h>
using namespace std;
int main(void)
{
    string a;
    string s = "啊";
    int n;
    cin >> n;
    cin.get();
    for(int j = 1;j<=n;j++)
    {
        getline(cin,a);
        int i,sum;
        for(sum=i=0;a[i];i++)
        if(a[i]<0) sum++;
        cout<<sum/s.size()<<endl;    
    }
}
