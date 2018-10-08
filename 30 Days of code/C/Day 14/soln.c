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

    Difference(vector<int> elements) {
        this->elements = elements;
        maximumDifference = 0;
    };

    void computeDifference() {
        for (size_t i = 0; i < elements.size() - 1; i++) {
            for (size_t j = i + 1; j < elements.size(); j++) {
                int curr = abs(elements[i] - elements[j]);
                if(curr > maximumDifference) {
                    maximumDifference = curr;
                }
            }
        }
    };

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
