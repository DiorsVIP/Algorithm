/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 15时16分35秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    int flag = -2,flag1 = 0,flag2 = 1,flag3 = 0;
    while(getline(cin,s))
    {
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='@'&&i!=0&&i!=(s.size()-1))
            {
                flag = i;
                flag1++;
            }
            if(s[i]=='.'&&(s[i-1]=='@'||s[i+1]=='@'||i==0||i==(s.size()-1)))
            flag2 = 0;
            if(s[i]=='.'&&flag>0&&i>flag+1&&i!=0&&i!=(s.size()-1))
            flag3++;
        }
        if(flag1==1&&flag2&&flag3)
        cout << "YES"<<endl;
        else
        cout << "NO"<<endl;
        flag = -2;
        flag1 = 0;
        flag2 = 1;
        flag3 = 0;
    }
}
