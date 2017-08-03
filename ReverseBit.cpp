//
//  ReverseBit.cpp
//  Week4PreSession
//
//  Created by Pooja Chowdhary on 8/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

unsigned int reverse1(unsigned int A) {
    vector<int> binaryArr;
    int count = 0;
    unsigned int quotient = A, rem;
    while(quotient > 0) {
        rem = quotient % 2;
        binaryArr.insert(binaryArr.begin(), rem);
        quotient = quotient/2;
        count++;
    }
    while(count < 32) {
        binaryArr.insert(binaryArr.begin(), 0);
        count++;
    }
    //   binaryArr.reverse(binaryArr.begin(), binaryArr.end());
    quotient = 0;
    //  count = binaryArr.size()-1;
    for(int i = 0; i < binaryArr.size(); i++) {
        rem = binaryArr[i] * pow(2, i);
        quotient += rem;
    }
    return quotient;
}
