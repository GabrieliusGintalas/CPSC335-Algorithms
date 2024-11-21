#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> GetKMostFreqElements(vector<int>& nums, int k){
    unordered_map<int, int> freqMap;
    for(int i = 0; i < nums.size(); i++){
        freqMap[nums[i]]++;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> prioQueue;

    for(auto& numPair : freqMap){
        int element = numPair.first;
        int frequency = numPair.second;
        prioQueue.push({frequency, element});


        if(prioQueue.size() > k){
            prioQueue.pop();    
        }
    }

    vector<int> mostFreqElements;
    while(!prioQueue.empty()){
        mostFreqElements.push_back(prioQueue.top().second);
        prioQueue.pop();    
    }

    return mostFreqElements;
}