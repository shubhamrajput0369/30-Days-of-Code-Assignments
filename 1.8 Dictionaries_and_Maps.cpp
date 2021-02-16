//Author: Shubham B. Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

int main() {
  
    int n;
    string str;
    string str_ip;
    long a;
    map<string,long> dic;
    
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>str>>a;
    dic[str]=a;}

    while(cin>>str_ip)
    {
        if(dic.find(str_ip)!=dic.end())
        cout<<str_ip<<"="<<dic.find(str_ip)->second;
    
        else
        cout<<"Not found";
    }
    return 0;
}
