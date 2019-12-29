#include <iostream>
#include "Solution.h"

using namespace std;

main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 7, 10};

    cout << s.twoSum(nums, 13) << endl;
}