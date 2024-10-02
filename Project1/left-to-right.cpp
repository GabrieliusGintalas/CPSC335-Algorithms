#include <iostream>
#include <vector>
#include "left-to-right.h"

using namespace std;

void SwapValues(string& a, string& b){
    string temp = a;
    a = b;
    b = temp;
}


void LeftToRightSort(vector<string>& discs){
    for(int i = 0; i < discs.size() - 1; i++){
        for(int j = 0; j < discs.size() - 1; j++){
            if(discs[j] == "Dark" && discs[j + 1] == "Light"){
                SwapValues(discs[j+1], discs[j]);
            }
        }
    }
}