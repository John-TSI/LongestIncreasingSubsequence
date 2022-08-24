// https://leetcode.com/problems/longest-increasing-subsequence/

#include<iostream>
#include"../inc/solution.hpp"


int main()
{
	std::vector<int> vec{10,9,2,5,3,7,101,18};
	std::cout << Solution().lengthOfLIS(vec);  // 4

	std::vector<int> vec2{0,1,0,3,2,3};
	std::cout << Solution().lengthOfLIS(vec2);  // 4

	std::vector<int> vec3{7,7,7};
	std::cout << Solution().lengthOfLIS(vec3);  // 1
	return 0;
}

