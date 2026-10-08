class Solution {
private:

    bool checkPalindrome(int i, string &s) {

        if (i >= s.size() / 2) return true;
        
        if (s[i] != s[s.size() - 1 - i]) return false;
        
        return checkPalindrome(i + 1, s);
    }

public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(char c :  s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }

        return checkPalindrome(0, cleaned);
    }
};