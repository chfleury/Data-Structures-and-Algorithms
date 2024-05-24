// Moore Voting Algorithm to O(n) complexity with 0(1) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];

        int count = 0;
        int candidate = NULL;

        for(int i = 0;i<nums.size(); i++) {
            if(nums[i] == candidate){
                count +=1;
            }

            if(count == 0){
              candidate = nums[i];
            }

            
            if(nums[i] != candidate){
                count -= 1;
            }
        }

        return candidate;
    }
};
