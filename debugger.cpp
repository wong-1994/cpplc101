#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std; 

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string res = "";
        for (string t : dictionary)
        {
            int i = 0, j = 0;
            while(j < t.size())
            {
                if (s[i] == t[j])
                {
                    ++j;
                }
                ++i;
            }
            if (j == t.size())
            {
                if(j > res.size() || (j == res.size() && t < res))
                    res = t;
            }
        }
        return res;
    }
};

int main()
{
    string ans;
    string s = "wordgoodgoodgoodbestword";
    vector<string> dic{"word","good","best","good"};
    Solution solu;

    ans = solu.findLongestWord(s, dic);
    cout<< ans << endl;

}