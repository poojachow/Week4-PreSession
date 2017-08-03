//
//  main.cpp
//  Week4PreSession
//
//  Created by Pooja Chowdhary on 8/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void subsetsWithDup1(vector<vector<int>> &answer, vector<int> &A, vector<int> &temp, int start) {
    
    for(int i = start; i<A.size(); i++) {
        temp.push_back(A[i]);
        answer.push_back(temp);
        subsetsWithDup1(answer, A, temp, i+1);
        while(i<A.size()-1 && A[i] == A[i+1])
            i++;
        temp.pop_back();
    }
}

vector<vector<int> > subsetsWithDup(vector<int> &A) {
    vector<vector<int>> answer;
    vector<int> temp;
    answer.push_back(temp);
    if(A.size() == 0) {
        
        return answer;
    }
    sort(A.begin(), A.end());
    subsetsWithDup1(answer, A, temp, 0);
    
    return answer;
}
