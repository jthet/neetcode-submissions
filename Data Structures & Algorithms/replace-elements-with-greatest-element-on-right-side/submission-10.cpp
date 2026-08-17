class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       
        int n = size(arr);
        vector<int> answer(n, 0);  

        int right_max = -1;

        for(int i = n-1; i > -1; i--){
            answer[i] = right_max;
            if (arr[i] > right_max){
                right_max = arr[i];
            }
        }
        
        return answer;   
    }
};