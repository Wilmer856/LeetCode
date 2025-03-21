// 67. Two Sum II - Input Array Is Sorted
// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// Example 2:

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
// Example 3:

// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].

// Constraints:

// 2 <= numbers.length <= 3 * 104
// -1000 <= numbers[i] <= 1000
// numbers is sorted in non-decreasing order.
// -1000 <= target <= 1000
// The tests are generated such that there is exactly one solution.

// Time Complexity: O(n)
// Solution #1: This solution will utilize the two pointers technique. The technique works by creating two pointers at the start and end of the array and only moving the pointers
//              according to if the sum low and high pointers are less or higher than the target. Being less than the target will require us to move the low pointer
//             to the right because we want to make our sum a bit higher, which moving to the next lowest number will do the trick. The high pointer will work the same way as the low pointer,
//             but in an opposite manner.

// Time Complexity: O(n^2)
// Solution #2: This solution will consist of using a brute force technique, resulting in checking all pairs.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int low = 0;
        int high = numbers.size() - 1;

        while (low < high)
        {
            int sum = numbers[low] + numbers[high];

            if (sum == target)
            {
                return {low + 1, high + 1};
            }
            else if (sum < target)
            {
                low++;
            }
            else if (sum > target)
            {
                high--;
            }
        }
        return {};
    }
};