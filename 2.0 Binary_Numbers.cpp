//Author: Shubham Bhagwansing Rajput
//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n!=0)
    {
        n = n & (n<<1);
        count++;
    }
    cout<<count;
    return 0;
}

