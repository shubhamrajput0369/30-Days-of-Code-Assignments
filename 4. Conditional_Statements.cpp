//Author: Shubham B. Rajput
//C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(1<=N && N<=100)
    {
        if(N%2!=0)
        cout<<"Weird";
        else if(N%2==0 && 1<N && N<6)
        cout<<"Not Weird";
        else if(N%2==0 && 5<N && N<21)
        cout<<"Weird";
        else if(N%2==0 && N>20)
        cout<<"Not Weird";
    }
    return 0;
}

