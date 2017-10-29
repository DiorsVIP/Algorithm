/*************************************************************************
> File Name: bookreading.cpp
> Author: 
> Mail: 
> Created Time: 2017年07月22日 星期六 08时23分07秒
************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int c,v0,v1,a,l,days;
    while(cin>>c>>v0>>v1>>a>>l)
    {
        int v = v0;
        days = 0;
        if(c<=v)
        cout << 1 << endl;
        else
        {
            while(c>0)
            {
                if(days==0)
                c = c-v;
                else
                c=c-v+l;
                if(v<v1)
                v += a;
                if(v>=v1)
                v = v1;
                days++;
            }
        cout << days <<endl;
        }
    }
}
