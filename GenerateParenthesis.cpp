//
//  GenerateParenthesis.cpp
//  Week4PreSession
//
//  Created by Pooja Chowdhary on 8/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void generateParen(int A, vector<string> &answer, int openCount, int closeCount, int index) {
    static char temp[100];
    if(closeCount == A) {
        answer.insert(answer.begin(), temp);
        return;
    }
    else {
        if(closeCount < openCount) {
            temp[index] = ')';
            generateParen(A, answer, openCount, closeCount+1, index+1);
        }
        if(openCount < A) {
            temp[index] = '(';
            generateParen(A, answer, openCount+1, closeCount, index+1);
        }
    }
}

vector<string> generateParenthesis(int A) {
    vector<string> answer;
    
    if(A == 0) {
        return answer;
    }
    if(A == 1) {
        answer.push_back("()");
        return answer;
    }
    generateParen(A, answer, 0, 0, 0);
    return answer;
}
