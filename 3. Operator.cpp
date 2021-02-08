//Author: Shubham B. Rajput
//C++

#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    float mc=meal_cost;
    float tip=tip_percent;
    float tax=tax_percent;

    float tipvalue= (mc/100)*tip;
    float taxvalue= (mc/100)*tax;
    int res=int (round(mc+tipvalue+taxvalue));
    cout<<res;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

