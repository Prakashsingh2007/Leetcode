class Solution {
public:
    int reverse(int x) {
        int l;
        long long rev = 0;
        int y =x;
        while(y!=0){
            l = y%10;
            rev = rev*10 + l;
            y = y/10;
        }
        if (rev < INT_MIN || rev > INT_MAX) {
            return 0;              
        }
        return rev;
        
    }
};