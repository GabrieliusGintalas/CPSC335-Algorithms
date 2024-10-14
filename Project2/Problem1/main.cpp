#include <iostream>
#include <vector>
#include <sstream>
#include "algo1.h"

using namespace std;

int main(){
    string inputString;
    cout << "Please enter ints seperated by a space: ";
    getline(cin, inputString);

    stringstream ss(inputString);
    int number;
    vector<int> nums;

    while (ss >> number){
        nums.push_back(number);
    }

    cout << "You entered: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int k;
    cout << "Now enter an integer k, where we will return the k most frequent elements : ";
    cin >> k;

    cout << "You have inputted: " << k << endl;

    vector<int> answer = GetKMostFreqElements(nums, k);

    std::string answerString = "Result: [";
    for(int i = 0; i < answer.size(); i++){
        answerString += to_string(answer[i]);
        if(i != answer.size() - 1){
            answerString += ",";
        }
    }
    answerString += "]";
    cout << answerString << endl;

    return 0;
}