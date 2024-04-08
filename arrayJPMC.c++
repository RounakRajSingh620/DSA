#include <queue>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int findTotalCost(std::vector<int> &arr)
{
    priority_queue<int, std::vector<int>, std::greater<int>> minHeap(arr.begin(), arr.end());
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    int total_cost = 0;

    while (minHeap.size() > 1)
    {
        int min_element = minHeap.top();
        minHeap.pop();

        int max_element = maxHeap.top();
        maxHeap.pop();

        int cost = ceil((double)(min_element + max_element) / (max_element - min_element + 1));
        total_cost += cost;

        int new_element = min_element + max_element;
        minHeap.push(new_element);
        maxHeap.push(new_element);
    }

    return total_cost;
}
int main()
{
    vector<int> arr = {2, 3, 4, 5, 7};
    int total_cost = findTotalCost(arr);
    cout << "Total cost: " << total_cost << std::endl;
    return 0;
}