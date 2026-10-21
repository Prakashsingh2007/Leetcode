class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int feq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            feq[s[i] - 'a']++;
            feq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (feq[i] != 0) return false;
        }

        return true;
    }
};
