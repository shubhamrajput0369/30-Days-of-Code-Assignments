// Author: Shubham Bhagwansing Rajput
// C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,e;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>e;
        if(e==1)
        {
            cout<<"Not prime"<<endl;
            continue;
        }
 
       if(e<=3)
        {
            cout<<"Prime"<<endl;
            continue;
        }
 
       if(e%2==0 || e%3==0)
        {
            cout<<"Not prime"<<endl;
            continue;
        }
        
        bool prime=true;
        int sqroot=sqrt(e);
           for(int i=3;i<=sqroot;i+=2)
            {
                if(e%i==0)
                {
 
                   prime=false;
                    break;
 
               }
            }
    
        if(prime==true)
        cout<<"Prime"<<endl;
        else
        cout<<"Not prime"<<endl;
    }
    
    return 0;
}
