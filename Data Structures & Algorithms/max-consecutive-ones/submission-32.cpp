class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_count = 0;

        int num_len = size(nums);

        for(int i = 0; i < num_len; i++) {
            if (nums[i] == 1){
                count +=1;
                if (count > max_count){
                    max_count = count;
                }
            }
            else {
                count = 0;
                }
            };
        return max_count;
    }
};