#include <iostream>
#include <vector>
#include "left-to-right.h"

using namespace std;

//Function that swaps the values of two strings
void SwapValues(string& a, string& b){
    string temp = a;
    a = b;
    b = temp;
}
