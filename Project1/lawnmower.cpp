#include <iostream>
#include <vector>
#include "lawnmower.h"
#include "left-to-right.h"

using namespace std;

void LawnMowerSort(vector<string>& discs){
    bool isSorted = false;
    while(isSorted == false){
        isSorted = true;
        for(size_t i = 0; i < discs.size() - 1; i++){
            if(discs[i] == "Dark" && discs[i+1] == "Light"){
                SwapValues(discs[i], discs[i+1]);
                isSorted = false;
            }
        }

        for(size_t j = discs.size() - 1; j > 0; j--){
            if(discs[j] == "Light" && discs[j-1] == "Dark"){
                SwapValues(discs[j], discs[j-1]);
                isSorted = false;
            }
        }
    }
}