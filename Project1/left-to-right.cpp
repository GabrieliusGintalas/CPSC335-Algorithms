#include <iostream>
#include <vector>
#include "left-to-right.h"

using namespace std;

//Left-to-right algorithm
void LeftToRightSort(vector<string>& discs){
    //Looking through all elements in the vector
    for(int i = 0; i < discs.size() - 1; i++){
        //Comparing i element with every element in the vector
        for(int j = 0; j < discs.size() - 1; j++){
            //If dark is before light, switch them around in the vector
            if(discs[j] == "Dark" && discs[j + 1] == "Light"){
                //Swapping the two values
                string temp = discs[j+1];
                discs[j+1] = discs[j];
                discs[j] = temp;
            }
        }
    }
}