class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int  i = m - 1;
        int j = n - 1;
        int k = m + n -1;
        
        while(j>= 0 && i>=0){
            if(nums1[i]< nums2[j]){
                nums1[k] = nums2[j];
                j--;
            }
            else{
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }

        for (; i>= 0; i-- ){
            nums1[k] = nums1[i];
            k--;
        }

        
        for (; j>= 0; j--){
            nums1[k] = nums2[j];
            k--; 
        }
    }
};