class Solution {
public:
    int addDigits(int num) {
        int l;
        while(num>9){
            l = num%10;
            num = num/10;
            num += l;
        }
        return num;
    }
};