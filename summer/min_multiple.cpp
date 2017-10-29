/*************************************************************************
> File Name: min_multiple.cpp
> Author: 
> Mail: 
> Created Time: 2017年07月19日 星期三 22时27分49秒
************************************************************************/

#include <iostream>
using namespace std;
int gcd(int a,int b)
{    
    if (b==0)         
    return a;    
    return gcd(b, a%b);
}
int main()
{    
    int n;    
    while (cin>>n)
    {       
        int i,m,temp=0,ans=1;  
        for (i=0; i<n; i++)
        {          
            cin >> m; 
            temp=gcd(ans,m);  
            ans=ans/temp*m;     
        }    
        cout << ans << '\n'; 
    }   
    return 0;
}


