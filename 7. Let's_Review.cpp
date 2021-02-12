//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	
	cin>>T;
	for(int i=0;i<T;i++)
	{
		string s;
		cin>>s;		
		for(int j=0;j<s.length();j++)
		{
			if(j%2==0)
			cout<<s[j];
		}
		cout<<" ";	
		for(int j=0;j<s.length();j++)
		{
			if(j%2!=0)
			cout<<s[j];	
		}
		cout<<"\n";
	}
	
	return 0;
}
