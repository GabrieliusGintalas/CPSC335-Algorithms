#include <iostream>
#include <vector>
#include "left-to-right.h"
#include "lawnmower.h"

using namespace std;

//Function to create alternating discs stored as strings in a vector
vector<string> CreateDiscs(int n){
    vector<string> discs;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            discs.push_back("Dark");
        } else {
            discs.push_back("Light");
        }
    }
    return discs;
}

int main(){
    //Int to hold user input of alternating disc row size
    int count = 0;

    //Prints text asking for user input
    cout << "Please enter a positive number for length of discs: ";

    //User Input 
    cin >> count;  //User Input

    //Creating a vector called "Discs1" of the size the user inputted
    vector<string> Discs1 = CreateDiscs(count);

    //Prints the size the user inputted and all of the elements in the vector
    cout << endl <<  "You have entered " << Discs1.size() << endl;
    cout << "Alternating discs: ";
    for(int i = 0; i < Discs1.size(); i++){
        cout << Discs1[i] << " ";
    }
    cout << endl;

    //Called Left-To-Right sorting algorithm
    LeftToRightSort(Discs1);
    
    //Prints the sorted vector of Discs1
    cout << endl << "Performing left-to-right algorithm..." << endl;
    for(int i = 0; i < Discs1.size(); i++){
        cout << Discs1[i] << " ";
    }
    cout << endl;
    
    //Creating a new alternating disc vector
    cout << endl <<  "Creating new row of alternating disks of the same size..." << endl;
    //Creating a vector called "Discs2" of the size the user inputted
    vector<string> Discs2 = CreateDiscs(count);
    //Prints the size the user inputted and all of the elements in the vector
    cout << "Alternating discs: ";
    for(int i = 0; i < Discs2.size(); i++){
        cout << Discs2[i] << " ";
    }
    cout << endl;

    //Called Lawnmower sorting algorithm
    LawnMowerSort(Discs2);
    
    //Prints the sorted vector of Discs2
    cout << endl <<  "Performing lawnmower algorithm..." << endl;
    for(int i = 0; i < Discs1.size(); i++){
        cout << Discs1[i] << " ";
    }
    cout << endl;
    

    return 0;
}