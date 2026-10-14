
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0;
        long long sum = 0;
        int ans = 1;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            long long op = 1LL * nums[right] * (right - left + 1) - sum;

            while (op > k) {
                sum -= nums[left];
                left++;

                op = 1LL * nums[right] * (right - left + 1) - sum;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

