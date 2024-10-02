#include <iostream>
#include <vector>

using namespace std;

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
    int count = 0;
    cout << "Please enter a positive number for length of discs: ";
    cin >> count;
    vector<string> Discs = CreateDiscs(count);
    cout << "You have entered " << Discs.size() << endl;
    for(int i = 0; i < Discs.size(); i++){
        cout << Discs[i] << " ";
    }
    cout << endl;



    return 0;
}