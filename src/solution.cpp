#include"../inc/solution.hpp"


int Solution::lengthOfLIS(std::vector<int>& nums)
{
    std::vector<int> cache{nums[0]};  // nums guaranteed to contain at least one value
    for(int n : nums)
    {
        if(n <= cache.back())  // current value less than current cache maximum --> update the maximum
        {
            cache.pop_back();  // remove previous maximum
            cache.push_back(n);  // insert new (lower) maximum; cache will always be sorted
        }
        else{ cache.push_back(n); }  // else value can be appended to cache, increasing size of LIS
    }
    return cache.size();  // upon reaching end of nums, cache contains the LIS
}