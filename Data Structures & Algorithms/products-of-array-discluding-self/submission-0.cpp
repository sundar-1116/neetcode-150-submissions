class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<int>numbers(n, -1);
        int product = 1;
        for(auto x : nums){
            product *= x;
        }
        for(int i = 0;i < n;i++){
            if(nums[i]!=0)numbers[i] = product / nums[i];
            else{
                int p = 1;
                for(int j = 0;j < n ;j++){
                    if(j == i)continue;
                    else p*= nums[j];
                }
                numbers[i] = p;
            }
        }
        return numbers;
    }
};
