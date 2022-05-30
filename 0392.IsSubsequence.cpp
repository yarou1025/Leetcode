class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() == 0) return true;
        if(t.length() == 0) return false;
        
        int x = 0, i = 0;
        for(; i < s.length() and x < t.length(); i++){
            while(x < t.length() and t[x++] != s[i]);
        }
        if(i != s.length() or (i == s.length() and s[i-1] != t[x-1])) return false;
        return true;
    }
};
Runtime: 2 ms, faster than 57.55% of C++ online submissions for Is Subsequence.
Memory Usage: 6.4 MB, less than 33.35% of C++ online submissions for Is Subsequence.
