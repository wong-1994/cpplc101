/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26];
        int length = s.size();

        for(int i = 0; i<length; i++)
        {
           last[s[i] - 'a'] = i; 
        }

        vector<int> partition;
        int start = 0, end = 0;
        for(int i = 0; i < length; i++)
        {
            end = max(last[s[i]- 'a'], end);
            if(i == end)
            {
                partition.push_back(end - start + 1);
                start = end + 1;
            }
        }

        return partition;
    }
};
// @lc code=end

