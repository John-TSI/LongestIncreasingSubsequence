#include<algorithm>
#include"../inc/solution.hpp"


int Solution::lengthOfLIS(std::vector<int>& nums)
{
    std::vector<int> seq{nums[0]};  // nums guaranteed to contain at least one value
    for(int n : nums)
    {
        if(n > seq.back())
            seq.push_back(n);  // n larger than largest value in subsequence  --> append to sequence
        else{ *std::lower_bound(seq.begin(), seq.end(), n) = n; }  // replace smallest value larger than n in seq with n
    }
    return seq.size();  // seq doesn't contain the LIS itself, but will be of the same length
}