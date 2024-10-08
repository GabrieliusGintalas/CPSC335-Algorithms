#include <iostream>
#include <vector>
#include "lawnmower.h"

using namespace std;

//Lawnmower sort
void LawnMowerSort(vector<string>& discs){
    //Simple flag for checking if sorted
    bool isSorted = false;
    //Keep running loop if not sorted
    while(isSorted == false){
        //Assume this is sorted
        isSorted = true;
        //Iteratate from left to right to check discs
        for(size_t i = 0; i < discs.size() - 1; i++){
            //If disc is "Dark" before "Light" swap it
            if(discs[i] == "Dark" && discs[i+1] == "Light"){
                //Swapping the 2 values
                string temp = discs[i+1];
                discs[i+1] = discs[i];
                discs[i] = temp;
                //Set flag that it is not sorted yet
                isSorted = false;
            }
        }
        //Iterate from right to left to check discs
        for(size_t j = discs.size() - 1; j > 0; j--){
            //If disc is "Light" before "Dark" from right to left, then swap it
            if(discs[j] == "Light" && discs[j-1] == "Dark"){
                //Swapping the 2 values
                string temp = discs[j-1];
                discs[j-1] = discs[j];
                discs[j] = temp;
                //Set flag that it is not sorted yet
                isSorted = false;
            }
        }
    }
}