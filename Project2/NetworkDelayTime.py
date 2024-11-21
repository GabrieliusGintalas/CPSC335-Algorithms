import heapq

# Test Cases
times1 = [[2,1,1],[2,3,1],[3,4,1]]
n1 = 4
k1 = 2

times2 = [[1,2,1]]
n2 = 2
k2 = 1

times3 = [[1,2,1]]
n3 = 2
k3 = 2

# Definition of function
def NetworkDelayTime(times, n, k):
    # Creation of empty graph to store the adjacency list
    graph = {}

    # Looping through the times to store the adjacency list
    for u, v, w in times:
        # If the node is not in the graph, add it with an empty list
        if u not in graph:
            graph[u] = []
        # Adding the neighbor and weight to the adjacency list
        graph[u].append((v, w))
    
    # Creation of empty distance dictionary to store the shortest distance to each node
    distanceDict = {}
    
    # Looping through the nodes to initialize the distance dictionary with infinity
    for node in range(1, n + 1):
        distanceDict[node] = float('inf')
    
    # Setting the distance to the source node to 0
    distanceDict[k] = 0

    # Creation of priority queue to store the nodes to be visited
    prioQueue = [(0,k)]

    # Creation of visited set to store the nodes that have been visited
    visited = set()

    # Looping through the priority queue
    while prioQueue:
        currentDistance, currentNode = heapq.heappop(prioQueue)

        # If the node has already been visited, continue
        if currentNode in visited:
            continue

        # Adding the node to the visited set
        visited.add(currentNode)

        # Looping through the neighbors of the current node
        for neighbor, weight in graph.get(currentNode, []):
            # If the distance to the neighbor is less than the current distance plus the weight, update the distance
            if currentDistance + weight < distanceDict[neighbor]:
                distanceDict[neighbor] = currentDistance + weight
                # Adding the neighbor to the priority queue
                heapq.heappush(prioQueue, (distanceDict[neighbor], neighbor))
    
    # Finding the maximum distance in the distance dictionary
    max_distance = max(distanceDict.values())
    
    # If the maximum distance is infinity, return -1, otherwise return the maximum distance
    if max_distance == float('inf'):
        return -1
    else:
        return max_distance

# Printing the result
print(NetworkDelayTime(times1, n1, k1))
print(NetworkDelayTime(times2, n2, k2))
print(NetworkDelayTime(times3, n3, k3))