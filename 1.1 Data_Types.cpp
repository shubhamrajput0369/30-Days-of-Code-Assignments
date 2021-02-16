//Author: Shubham B. Rajput
//C++

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    int num;
    double dnum;
    string str;
    
    cin>>num>>dnum;
    cin.ignore();       //Ignores end of line character
    getline(cin, str);
    
    // Print the sum of both integer variables on a new line.
    cout<<num+i;
    
    // Print the sum of the double variables on a new line.
    cout<<"\n"<<fixed<<setprecision(1)<<dnum+d;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<"\n"<<s<<str;
    
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    return 0;
}
