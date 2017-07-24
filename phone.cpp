/*************************************************************************
	> File Name: phone.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月22日 星期六 07时59分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin.get();
    for(int i = 0;i<n;i++)
    {
        getline(cin,s);
        cout << 6 << s[6] << s[7] 
        << s[8] << s[9] << s[10] << endl;
        
    }
}
