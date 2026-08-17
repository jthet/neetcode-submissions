class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_count = 0;

        int num_len = size(nums);
        std::cout << num_len << std::endl;

        for(int i = 0; i < num_len; i++) {
            std::cout << i << " " << nums[i] << endl;
            if (nums[i] == 1){
                std::cout << "count " << count << endl;
                count +=1;
                if (count > max_count){
                    max_count = count;
                }
                std::cout << "count " << count << endl;
                std::cout << "max count " << max_count << endl;
            }
            else {
                count = 0;
                }
            };
        return max_count;
    }
};