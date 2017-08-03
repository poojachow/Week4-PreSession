//
//  minXOR.cpp
//  Week4PreSession
//
//  Created by Pooja Chowdhary on 8/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int min = -1;
    int xorVal = 0;
    
    for(int i = 0; i < A.size()-1; i++) {
        xorVal = A[i] ^ A[i+1];
        if(min == -1) {
            min = xorVal;
        }
        else {
            min = min > xorVal ? xorVal : min;
        }
    }
    return min;
}
