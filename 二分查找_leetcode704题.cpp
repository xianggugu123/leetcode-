#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  left = 0;//定义左区间
        int right = nums.size() - 1;//左闭右闭，所以右区间为nums的size即地址最后的的下一位减1
        while (left <= right)//遍历
        {
            int middle = left + (right - left) / 2;//取中间
            if (nums[middle] > target)//取中间值右边空间
            {
                right = middle - 1;
            }
            else if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else
            {
                return middle;
            }
        }
        return -1;
    }

    Solution() = default;
};
int main()
{
    Solution();
	return 0;
}
