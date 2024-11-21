nums1 = [1,1,1,2,2,3]
k = 2

nums2 = [1]
k2 = 1

nums3 = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6]
k3 = 3

def TopKMostFrequentElements(nums, k):
    numMap = {}
    for num in nums:
        if num not in numMap:
            numMap[num] = 1
        else:
            numMap[num] += 1
    

    mostFrequent = sorted(numMap.items(), key=lambda x: x[1], reverse=True)

    result = []
    for i in range(k):
        result.append(mostFrequent[i][0])
    return result

print(TopKMostFrequentElements(nums1, k))
print(TopKMostFrequentElements(nums2, k2))
print(TopKMostFrequentElements(nums3, k3))