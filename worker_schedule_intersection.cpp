#include<iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;


//  function two find the intersecting days between two workers coming in a month.
int countIntersection(vector<int>& a, vector<int>& b) {
     int bitmask_a = 0;
     int bitmask_b = 0;
    
     // Set bits for days worker A comes in
     for (int day : a) {
         bitmask_a = bitmask_a | (1 << day);
     }
     
     // Set bits for days worker B comes in
     for (int day : b) {
         bitmask_b = bitmask_b | (1 << day);
     }
    
     // Find intersection using bitwise AND and count the set bits
     return __builtin_popcount(bitmask_a & bitmask_b);
}


// main function call
int main() {
     vector<vector<int>> query = {
     	                          {2, 3, 5, 6, 8}, // query[0]
     	                          {2, 4, 5, 8},
     	                          {1, 2, 10,  12, 14, 16}
     	                         };
     // for loop for sending two arrays at a time
     int maxLength = INT_MIN;
     for(int i = 0; i < query.size() - 1; i++) {
     	maxLength = max(maxLength, countIntersection(query[i], query[i+1]));
     }
     maxLength = max(maxLength, countIntersection(query[0], query[query.size()-1]));
     cout << "Maximum number of days when two workers are both present: " << maxLength << endl;
     return 0;
}
//    query[0]    
//    day = 2: bitmask_a = bitmask_a | (1 << 2) - bitmask_a = 00000000000000000000000000000100
//    day = 3: bitmask_a = bitmask_a | (1 << 3) - bitmask_a = 00000000000000000000000000001100
//    day = 5: bitmask_a = bitmask_a | (1 << 5) - bitmask_a = 00000000000000000000000000101100
//    day = 6: bitmask_a = bitmask_a | (1 << 6) - bitmask_a = 00000000000000000000000001101100
//    day = 8: bitmask_a = bitmask_a | (1 << 8) - bitmask_a = 00000000000000000000000101101100
//    query[1]
//    day = 2: bitmask_b = bitmask_b | (1 << 2) → bitmask_b = 00000000000000000000000000000100
//    day = 4: bitmask_b = bitmask_b | (1 << 4) → bitmask_b = 00000000000000000000000000010100
//    day = 5: bitmask_b = bitmask_b | (1 << 5) → bitmask_b = 00000000000000000000000000110100
//    day = 8: bitmask_b = bitmask_b | (1 << 8) → bitmask_b = 00000000000000000000000100110100
//    final bitmask
//    bitmask_a & bitmask_b = 00000000000000000000000100100100

    
    
    
    
    
    
    
    
    
