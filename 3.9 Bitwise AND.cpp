//Author: Shubham Bhagwansing Rajput
//C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int ncases, n, k, max = 0, tmp = 0;
    vector<int> range;
    range.reserve(1000);
 
   cin >> ncases;
    for(int i = 0; i < ncases; ++i){
        cin >> n >> k;
 
       for(int j = 0; j < n; ++j)
            range.push_back(j + 1);
 
       for(int x = 0; x < range.size() - 1; ++x){
 
