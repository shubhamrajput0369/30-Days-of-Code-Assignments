//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int d1,m1,y1,d2,m2,y2,fine=0,flag=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    
	    if(y1>y2)
	    {
	        fine = 10000;
	        goto print;
	    }
	
		else if(m1>m2 && y1==y2)
	    {
	        fine = 500*(m1-m2);
	        goto print;
	    }
	    
	    else if(d1>d2 && m1==m2 && y1==y2)
	    {
	        fine = 15*(d1-d2);
	        goto print;
	    }
	    else
	    	fine=0;
	    
	print: cout<<fine;
       
    return 0;
}


