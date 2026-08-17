class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // pointer to first element
        int n = nums.size() -1; // pointer to last element

        while (i <= n) {
            if (nums[i] == val){
                nums[i] = nums[n--]; // steal last array element and shift pointer down
            }
            else {
                i++;
            }
        }
        return n + 1;
    }
};