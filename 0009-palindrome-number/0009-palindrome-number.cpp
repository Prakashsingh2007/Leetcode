class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int l;
        int y =x;
        while(y>0){
            l = y%10;
            rev = rev *10 + l;
            y = y/10;
        }
        return rev == x;
        
    }
};