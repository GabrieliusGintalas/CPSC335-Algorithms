# Test Cases
nums1 = [1,1,1,2,2,3]
k = 2

nums2 = [1]
k2 = 1

nums3 = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6]
k3 = 3

# Definition of function
def TopKMostFrequentElements(nums, k):
    # Creation of empty map to store the frequency of each number
    numMap = {}
    # Looping through the numbers to store the frequency of each number
    for num in nums:
        # If the number is not in the map, add it with a frequency of 1
        if num not in numMap:
            numMap[num] = 1
        # If the number is already in the map, increment its frequency by 1
        else:
            numMap[num] += 1
    
    # Sorting the map by the frequency of the numbers in descending order
    mostFrequent = sorted(numMap.items(), key=lambda x: x[1], reverse=True)

    # Creating a list to store the k most frequent numbers
    result = []
    
    # Looping through the k most frequent numbers and adding them to the result list
    for i in range(k):
        result.append(mostFrequent[i][0])

    # Returning the result list
    return result

# Printing the result
print(TopKMostFrequentElements(nums1, k))
print(TopKMostFrequentElements(nums2, k2))
print(TopKMostFrequentElements(nums3, k3))