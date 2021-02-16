#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
    cin>>t;
    v.push_back(t);
    }
    v.shrink_to_fit();
    for(auto i=v.end()-1;i!=v.begin()-1;i--)
    cout<<*i<<" ";
    
    return 0;
}
