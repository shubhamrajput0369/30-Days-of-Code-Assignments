#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    Difference(std::vector<int>& a)
    {
        elements=a;
    }
	void computeDifference() // Add your code here
    {
        int d,low,max;
        maximumDifference=0;
        for(int i=0;i<elements.size();i++)
        {
            if(low>elements[i])
            low=elements[i];
            
            if(max<elements[i])
            max=elements[i];
        }
        maximumDifference=max-low;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
