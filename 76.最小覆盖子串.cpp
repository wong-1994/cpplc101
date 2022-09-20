/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> chars(128, 0);
        vector<bool> flag(128, false);

        for(int i=0; i<t.size(); ++i)
        {
            flag[t[i]] = true;
            ++chars[t[i]];
        }
    
        int cnt=0, l=0, min_l=0, min_size=s.size()+1;
        for(int r=0; r<s.size(); ++r)
        {
            if(flag[s[r]])
            {
                if(--chars[s[r]] >= 0)
                    ++cnt;
            }

            while(cnt==t.size())
            {
                if(min_size>r-l+1)
                {
                    min_size=r-l+1;
                    min_l = l;
                }
                if(flag[s[l]] && ++chars[s[l]]>0)
                {
                    --cnt;
                }
                ++l;
            }
        }
        return min_size>s.size() ? "" : s.substr(min_l, min_size);
    }
};
// @lc code=end

