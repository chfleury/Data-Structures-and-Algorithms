class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        int j = 1;
        int k = 0;

        while (i < nums.size())
        {
            if (nums[i] == val)
            {
                while (j < nums.size())
                {

                    if (nums[j] != val)
                    {
                        int t = nums[i];
                        nums[i] = nums[j];
                        nums[j] = t;
                        k++;
                        break;
                    }

                    j++;
                }
            }
            else
            {
                k++;
            }

            i++;
            j++;
        }

        return k;
    }
};