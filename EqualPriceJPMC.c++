#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<long int> countMinimumOperations(const std::vector<int> &price, const std::vector<int> &query)
{
    std::vector<long int> min_ops;
    for (int q : query)
    {
        long int ops = 0;
        for (int p : price)
        {
            ops += std::abs(p - q);
        }
        min_ops.push_back(ops);
    }
    return min_ops;
}

int main()
{
    int n = 3;
    int q = 3;
    std::vector<int> price = {2,5,1};
    std::vector<int> query = {8,4,3};

    std::vector<long int> result = countMinimumOperations(price, query);

    std::cout << "Minimum number of operations for each query: ";
    for (long int ops : result)
    {
        std::cout << ops << " ";
    }
    std::cout << std::endl;

    return 0;
}
