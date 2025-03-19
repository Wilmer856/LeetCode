// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

// Solution #1 utilizes a Hash map, resulting in a time complexity of O(n)
// Solution #2 utlizes a brute force approach that requires iterating through every pair of numbers, resulting in a time complexity pf O(n^2)

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> nums_table;

        for (int i = 0; i < nums.size(); i++)
        {

            int comp = target - nums[i];

            if (nums_table.find(comp) != nums_table.end())
            {
                return {nums_table.find(comp)->second, i};
            }
            else
            {
                nums_table[nums[i]] = i;
            }
        }
        return {};
    }
};