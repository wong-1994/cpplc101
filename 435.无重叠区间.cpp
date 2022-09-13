/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */

// @lc code=start
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return 0;

        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });

        int remove = 0, prev = intervals[0][1];
        for(int i=1; i<n; i++)
        {
            if(intervals[i][0] < prev)
                remove++;
            else
                prev = intervals[i][1];
        }

        return remove;
    }
};
// @lc code=end

