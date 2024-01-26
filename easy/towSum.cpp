#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Iterate through each pair of numbers in the vector
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                // If the sum of the two numbers equals the target, return their indices
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        // If no solution is found, return an empty vector (though this should not happen)
        return {};
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
