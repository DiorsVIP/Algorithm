/*************************************************************************
	> File Name: Palindromes_easyversion.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月21日 星期五 09时41分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n;
    string a;
    string b;
    cin >> n;
    cin.get();
    for(int i = 1;i<=n;i++)
    {
        getline(cin,a);
        for(int j = 0;j<a.size();j++)
            b+=a[a.size()-j-1];
        if(b==a)
        cout << "yes" <<endl;
        else
        cout << "no" <<endl;
        b.clear();
    }
}
